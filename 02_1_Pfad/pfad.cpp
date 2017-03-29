#include <iostream>
#include "pfad.h"

using namespace std;

Pfad::Pfad(int anz_punkte) {
	pfad = new Punkt[anz_punkte];
	akt_index = 0;
}

void Pfad::insertKoord(Punkt& p) {
	pfad[akt_index] = p;
	akt_index++;
}

void Pfad::printKoord(int i) {
	pfad[i].print();
}
