#pragma once

#include "Beobachter.h"
#include "Aktie.h"

class Alarmmelder : public Beobachter {
	float untere_grenze;
	float obere_grenze;
	float beobachteter_kurs;
	Aktie* beobachtete_aktie;
public:
	Alarmmelder (float obere, float untere, Aktie* ziel);
	void aktualisiere ();
};
