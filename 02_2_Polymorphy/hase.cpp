#include "hase.h"

int Hase::getPosition() {
	return position;
}
int Hase::getKarotten() {
	return karotten;
}
int Hase::getVorrat() {
	return karotten;
}
Hase::Hase() {
	position = 0;
	karotten = 31;
	fehlversuche = 0;
}
bool Hase::ziehe(int felder) {
	int kosten = 0;
	for(int i = felder; i>0;i--) {
		kosten += i;
	}
	if(kosten > karotten) {
		fehlversuche++;
		if(fehlversuche==3) {
			if(felder > position) {
				karotten += (10*position);
				position = 0;
			} else {
				position -= felder;
				karotten += (10*felder);
			}
			fehlversuche = 0;
			return true;
		} else {
			return false;
		}
	} else {
		karotten -= kosten;
		position += felder;
		return true;
	}
}
