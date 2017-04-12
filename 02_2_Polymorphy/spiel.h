#include "hase.h"
#include "igel.h"

// #pragma once

class Spiel {
public:
	Spiel(int anzFelder, int anzHasen, int anzIgel);
	Spielfigur* Spielfiguren[20];
	int ziel;
	int anzFiguren;
	int getZiel();
	int wuerfle();
	void macheZug();
	bool getStand();
};
