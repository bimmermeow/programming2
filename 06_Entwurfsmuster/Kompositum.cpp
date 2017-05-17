#include "Kompositum.h"

Kompositum::Kompositum(char z)
{
	zahl = z;

	for (int i=0; i<MAXKOMP; i++)
	{
		komponenten[i] = 0;
	}
	aktuelleAnzahl = 0;
}

Kompositum::~Kompositum(void)
{
}

bool Kompositum::fuegeHinzu (Komponente* k)
{
	bool retval = false;

	if (aktuelleAnzahl < MAXKOMP)
	{
		komponenten[aktuelleAnzahl] = k;
		aktuelleAnzahl++;
		retval = true;
	}
	return retval;
}

void Kompositum::print()
{
	cout << zahl << ' ';

	for (int i=0; i<aktuelleAnzahl; i++)
	{
		komponenten[i]->print();
		cout << ' ';
	}

}

int Kompositum::summe()
{
	// 	int sum = zahl;
	// for (int i=0; i<aktuelleAnzahl; i++)
	// {
	// 	sum  += komponenten[i]->summe();
	// }
	// 	return sum;
	return 3;
}
