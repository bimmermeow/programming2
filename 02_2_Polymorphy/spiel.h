// #include "hase.h"
// #include "igel.h"

#pragma once

class Spiel {
public:
	Igel derIgel;
	Hase derHase;
	int ziel;
	Spiel(int anzFelder);
	int getZiel();
	int wuerfle();
	void macheZug();
	bool getStand();
};
