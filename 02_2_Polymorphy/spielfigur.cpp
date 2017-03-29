#include "spielfigur.h"

Spielfigur::Spielfigur() {
	position = 0;
}
int Spielfigur::getPosition() {
	return position;
}
int Spielfigur::getVorrat() {
	return restliche_felder;
}
