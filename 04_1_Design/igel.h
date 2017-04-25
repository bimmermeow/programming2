#pragma once
// #include "spielfigur.h"
class Igel : public Spielfigur {
public:
	Igel();
	string getKlassenname();
	bool ziehe(int felder);
};
