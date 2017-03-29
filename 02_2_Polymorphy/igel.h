#pragma once
// #include "spielfigur.h"
class Igel : public Spielfigur {
public:
	Igel();
	bool ziehe(int felder);
	int getSalat();
};
