#include "BeobachterZiel.h"

BeobachterZiel::BeobachterZiel () {
	beobachter = { 0 };
	akt_index = 0;
}
int BeobachterZiel::anmelden(Beobachter* b) {
	beobachter[akt_index] = b;
	beobachter[akt_index]->set_ziel(this);
	akt_index++;
	return (akt_index-1);
}
void BeobachterZiel::abmelden(int index) {
	beobachter[index] = 0;
}
void BeobachterZiel::benachrichtigeAlle() {
	for (size_t i = 0; i < 50; i++) {
		if(beobachter[i]==0) continue;
		beobachter[i]->aktualisiere();
	}
}
