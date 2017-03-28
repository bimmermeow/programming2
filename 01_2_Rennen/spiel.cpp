#include "spiel.h"
#include <iostream>

Spiel::Spiel(int anzFelder) {
	Hase derHase;
	Igel derIgel;
	ziel = anzFelder;
}
int Spiel::getZiel() {
	return ziel;
}
bool Spiel::getStand() {
	std::cout << "[  Hase: " << derHase.getPosition() << "   ] [  Igel: " << derIgel.getPosition() << "  ]" << std::endl;
	if(derHase.getPosition()>=ziel || derIgel.getPosition()>=ziel ) {
		return true;
	} else {
		return false;
	}
}
