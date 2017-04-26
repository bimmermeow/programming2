#include "spielfeld.h"

using namespace std;

Spielfeld::Spielfeld(int anz_felder) {
	srand(time(0));
	for(int i = 0; i<anz_felder; i++) {
		int zahl = rand() % 6 - 4;
		if(zahl<0) zahl = 0;
		Ereignisfelder[i] = zahl;
	}
}
bool Spielfeld::getEreignisfeld(int feld_nr) {
	return Ereignisfelder[feld_nr];
}
int Spielfeld::getEreignis() {
	return (rand() % 3 +1);
}