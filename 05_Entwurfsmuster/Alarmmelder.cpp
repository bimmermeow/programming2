#include "Alarmmelder.h"
#include <iostream>

using namespace std;

Alarmmelder::Alarmmelder (float obere, float untere, Aktie* ziel) {
	if(ziel!=0) {
		beobachtete_aktie = ziel;
		beobachtete_aktie->anmelden((Beobachter*)this);
		beobachteter_kurs = 0;
		untere_grenze = untere;
		obere_grenze = obere;
	}
}

void Alarmmelder::aktualisiere() {
	float neuer_kurs = beobachtete_aktie->get_kurs();
	if(neuer_kurs!=beobachteter_kurs) {
		if(neuer_kurs<untere_grenze) {
			cout << "ALARM: Der Kurs der Aktie " << beobachtete_aktie->name << " ist unter die untere Grenze gefallen, auf den Wert "<< neuer_kurs << endl;
		}
		if(neuer_kurs>obere_grenze) {
			cout << "ALARM: Der Kurs der Aktie " << beobachtete_aktie->name << " ist über die obere Grenze gestiegen, auf den Wert "<< neuer_kurs << endl;
		}
	}
	beobachteter_kurs = neuer_kurs;
}
