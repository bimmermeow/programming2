#include "spiel.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

Spiel::Spiel(int anzFelder) {
	Hase derHase;
	Igel derIgel;
	ziel = anzFelder;
	srand(time(0));
}
int Spiel::getZiel() {
	return ziel;
}
bool Spiel::getStand() {
	cout << "[  Hase: " << setfill(' ') << setw(2) << derHase.getPosition() << " Karotten:     " << setfill(' ') << setw(2) << derHase.getKarotten() << " ] ";
	cout << "[  Igel: " << setfill(' ') << setw(2) << derIgel.getPosition() << " Felder übrig: " << setfill(' ') << setw(2) << derIgel.getVorrat() << " ]             ";
	if(derHase.getPosition()>=ziel || derIgel.getPosition()>=ziel ) {
		return true;
	} else {
		return false;
	}
}
int Spiel::wuerfle() {
	int zahl = rand() % 6 + 1;
//	cerr << zahl << endl;
	return zahl;
}
void Spiel::macheZug() {
	derHase.ziehe(wuerfle());
	derIgel.ziehe(wuerfle());
}
