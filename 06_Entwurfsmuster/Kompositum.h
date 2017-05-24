#include "Komponente.h"
#include <iostream>
using namespace std;

#define MAXKOMP 2

class Kompositum: public Komponente {
	Komponente* komponenten[MAXKOMP];
	int aktuelleAnzahl;
	char zahl;
public:
	Kompositum(char z=0);
	~Kompositum();
	bool fuegeHinzu(Komponente* k);
	void print();
	int summe();
};
