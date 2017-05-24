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
	if(zahl=='+') cout << '(';
	komponenten[0]->print();
	cout << zahl;
	komponenten[1]->print();
	if(zahl=='+') cout << ')';
}

int Kompositum::summe()
{
	if(zahl=='+') {
		return (komponenten[0]->summe() + komponenten[1]->summe());
	}
	if(zahl=='*') {
		return (komponenten[0]->summe() * komponenten[1]->summe());
	}
	return 0;
}
