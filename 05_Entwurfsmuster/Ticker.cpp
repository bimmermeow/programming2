#include "Ticker.h"

using namespace std;

Ticker::Ticker () {
	beobachteter_kurs = 0;
}
void Ticker::aktualisiere() {
	float neuer_kurs = zielklasse->get_kurs();
	if(neuer_kurs != beobachteter_kurs) {
		cout << " +++ Neuer Kurs der Aktie " << zielklasse->name << ": " << neuer_kurs << " +++"<< endl;
	}
	beobachteter_kurs = neuer_kurs;
}
