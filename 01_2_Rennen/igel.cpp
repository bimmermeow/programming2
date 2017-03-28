#include "igel.h"

int Igel::getPosition() {
	return position;
}
int Igel::getSalat() {
	return salat;
}
int Igel::getVorrat() {
	return salat;
}
Igel::Igel() {
	position = 0;
	salat = 1;
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
