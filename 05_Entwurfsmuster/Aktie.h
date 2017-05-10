#pragma once

#include <string>
#include "BeobachterZiel.h"

using namespace std;

class Aktie : public BeobachterZiel {
	float kurs;
public:
	Aktie (string aname, string aisin, float akurs);
	float get_kurs ();
	void setze_kurs (float akurs);
	string name;
	string isin;
};
