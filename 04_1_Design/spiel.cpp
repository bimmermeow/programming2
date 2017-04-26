#include "spiel.h"

using namespace std;

Spiel::Spiel(int anzFelder, int anzHasen, int anzIgel) : feld(anzFelder) {
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
	//feld(anzFelder);
	srand(time(0));
}
int Spiel::getZiel() {
	return ziel;
}
bool Spiel::getStand() {
	bool imZiel = false;
	for (int i = 0; i < anzFiguren; i++) {
		cout << "[ " << Spielfiguren[i]->getKlassenname() << i << ": " << setfill(' ') << setw(2) << Spielfiguren[i]->getPosition() << "] ";
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
		Spielfiguren[i]->ziehe(wuerfle());
		int ereignis = 0;
		if(feld.getEreignisfeld(Spielfiguren[i]->getPosition())) {
			ereignis = feld.getEreignis();
		}
		switch (ereignis) {
			case 0:
				//Kein Ereignis
				break;
			case 1:
				//Zug kostet nix
				Spielfiguren[i]->RVVLZWD();
				cout << Spielfiguren[i]->getKlassenname() << i << " bekommt den letzten Zug umsonst!" << endl;
				break;
			case 2:
				//Nochmal würfeln
				Spielfiguren[i]->ziehe(wuerfle());
				cout << Spielfiguren[i]->getKlassenname() << i << " darf nochmal würfeln!" << endl;
				break;
			case 3:
				//3 Felder zurück
				Spielfiguren[i]->ziehe(-3);
				cout << Spielfiguren[i]->getKlassenname() << i << " geht 3 Felder zurück!" << endl;
				break;
		}
	}
}
