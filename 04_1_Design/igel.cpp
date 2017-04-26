#include "igel.h"
// #include "spielfigur.cpp"

Igel::Igel() {
	position = 0;
	vorrat = 10;
}
bool Igel::ziehe(int felder) {
	bool ret;
	vvvlz = 0;
	if(felder == -3) {
		vorrat += 3;
		position -= 3;
		return true;
	}
	if(felder<vorrat) {
		position += felder;
		vorrat -= felder;
		vvvlz = felder;
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
string Igel::getKlassenname() {
	return "Igel";
}
