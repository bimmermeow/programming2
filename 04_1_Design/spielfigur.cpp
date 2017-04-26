#include "spielfigur.h"

Spielfigur::Spielfigur() {
	position = 0;
}
int Spielfigur::getPosition() {
	return position;
}
int Spielfigur::getVorrat() {
	return vorrat;
}
void Spielfigur::RVVLZWD() {
	vorrat += vvvlz;
}
