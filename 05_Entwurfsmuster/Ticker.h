#pragma once

#include "Beobachter.h"
#include "Aktie.h"

class Ticker : public Beobachter {
	float beobachteter_kurs;
	Aktie* beobachtete_aktie;
public:
	Ticker (Aktie* ziel);
	void aktualisiere ();
};
