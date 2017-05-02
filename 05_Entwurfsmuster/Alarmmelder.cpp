#include "Alarmmelder.h"

using namespace std;

Alarmmelder::Alarmmelder (float obere, float untere) {
	beobachteter_kurs = 0;
	untere_grenze = untere;
	obere_grenze = obere;
}

void Alarmmelder::aktualisiere() {
	float neuer_kurs = zielklasse->getKurs();
	if(neuer_kurs!=beobachteter_kurs) {
		if(neuer_kurs<untere_grenze) {
			cout << "ALARM: Der Kurs der Aktie " << zielklasse->name << " ist unter die untere Grenze gefallen, auf den Wert "<< neuer_kurs << endl;
		}
		if(neuer_kurs>obere_grenze) {
			cout << "ALARM: Der Kurs der Aktie " << zielklasse->name << " ist über die obere Grenze gestiegen, auf den Wert "<< neuer_kurs << endl;
		}
	}
	beobachteter_kurs = neuer_kurs;
}
