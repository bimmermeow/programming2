#include "BeobachterZiel.h"
#include "Beobachter.h"

BeobachterZiel::BeobachterZiel(void)
{
	for (int i=0; i<MAXBEOB; i++)
	{
		beobachterFeld[i] = 0;
	}
	aktuelleAnzahl = 0;
}

BeobachterZiel::~BeobachterZiel(void)
{
}

bool BeobachterZiel::anmelden (Beobachter* b)
{
	bool retval = false;

	if (aktuelleAnzahl < MAXBEOB)
	{
		beobachterFeld[aktuelleAnzahl] = b;
		aktuelleAnzahl++;
		retval = true;
	}
	return retval;
}

void BeobachterZiel::benachrichtigeAlle()
{
	for (int i=0; i<aktuelleAnzahl; i++)
	{
		beobachterFeld[i]->aktualisiere();
	}
}
