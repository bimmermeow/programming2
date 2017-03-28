#include "hase.h"
#include "igel.h"

class Spiel {
private:
	Hase derHase;
	Igel derIgel;
	int ziel;
public:
	Spiel(int anzFelder);
	int getZiel();
	int wuerfle();
	void macheZug();
	bool getStand();
};
