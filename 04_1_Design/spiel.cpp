#include "spiel.h"

using namespace std;

Spiel::Spiel(int anzFelder, int anzHasen, int anzIgel) {
	//cout << "Konstruktor von Spiel aufgerufen";
	Spielfiguren[20] = {0};
	//cout << "Array erstellt";
	for (int i = 0; i < anzHasen; i++) {
		Spielfiguren[i] = new Hase();
	}
	cout << "Hasen erstellt";
	for (int i = anzHasen; i < anzIgel+anzHasen; i++) {
		Spielfiguren[i] = new Igel();
	}
	cout << "Igel erstellt";
	anzFiguren = anzIgel+anzHasen;
	ziel = anzFelder;
	feld(anzFelder);
	srand(time(0));
}
int Spiel::getZiel() {
	return ziel;
}
bool Spiel::getStand() {
	bool imZiel = false;
	for (int i = 0; i < anzFiguren; i++) {
		cout << "[ " << Spielfiguren[i]->getKlassenname() << ": " << setfill(' ') << setw(2) << Spielfiguren[i]->getPosition() << "] ";
		if(Spielfiguren[i]->getPosition()>=ziel) imZiel = true;
	}
	cout << endl;
	return imZiel;
}
int Spiel::wuerfle() {
	int zahl = rand() % 6 + 1;
	return zahl;
}
void Spiel::macheZug() {
	//int anzFiguren = (sizeof(Spielfiguren)/sizeof(*Spielfiguren));
	for (int i = 0; i < anzFiguren; i++) {
		int wurf = wuerfle();
		int ereignis = 0;
		if(feld.getEreignisfeld(wurf+Spielfiguren[i]->getStand())) {
			ereignis = feld.getEreignis();
		}
		switch (ereignis) {
			case 0:
				//Kein Ereignis
				Spielfiguren[i]->ziehe(wurf);
				break;
			case 1:
				//Zug kostet nix
				Spielfiguren[i]->ziehe(wurf, false);
				break;
			case 2:
				//Nochmal würfeln
				Spielfiguren[i]->ziehe(wurf);
				Spielfiguren[i]->ziehe(wuerfle());
				break;
			case 3:
				//3 Felder zurück
				Spielfiguren[i]->ziehe(-3);
				break;
		}
	}
}
