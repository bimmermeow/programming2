#include "igel.h"
// #include "spielfigur.cpp"

Igel::Igel() {
	position = 0;
	vorrat = 10;
}
bool Igel::ziehe(int felder) {
	bool ret;
	if(felder<vorrat) {
		position += felder;
		vorrat -= felder;
		ret = true;
	}
	if(felder>vorrat) {
		ret = false;
	}
	if(felder==vorrat) {
		position += felder;
		vorrat = 10;
		ret = true;
	}
	return ret;
}
