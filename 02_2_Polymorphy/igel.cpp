#include "igel.h"
#include "spielfigur.cpp"


Igel::Igel() {
	position = 0;
	restliche_felder = 10;
}
bool Igel::ziehe(int felder) {
	bool ret;
	if(felder<restliche_felder) {
		position += felder;
		restliche_felder -= felder;
		ret = true;
	}
	if(felder>restliche_felder) {
		ret = false;
	}
	if(felder==restliche_felder) {
		position += felder;
		restliche_felder = 10;
		ret = true;
	}
	return ret;
}
