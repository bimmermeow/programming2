#include "Ticker.h"
#include <iostream>

using namespace std;

Ticker::Ticker (Aktie* ziel) {
	beobachteter_kurs = 0;
	if(ziel!=0) {
		beobachtete_aktie = ziel;
		beobachtete_aktie->anmelden((Beobachter*)this);
	}
}
void Ticker::aktualisiere() {
	float neuer_kurs = beobachtete_aktie->get_kurs();
	if(neuer_kurs != beobachteter_kurs) {
		cout << " +++ Neuer Kurs der Aktie " << beobachtete_aktie->name << ": " << neuer_kurs << " +++"<< endl;
	}
	beobachteter_kurs = neuer_kurs;
}
