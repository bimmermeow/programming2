#include "hase.h"
#include "spielfigur.cpp"

Hase::Hase() {
	position = 0;
	restliche_felder = 31;
	fehlversuche = 0;
}
bool Hase::ziehe(int felder) {
	int kosten = 0;
	for(int i = felder; i>0;i--) {
		kosten += i;
	}
	if(kosten > restliche_felder) {
		fehlversuche++;
		if(fehlversuche==3) {
			if(felder > position) {
				restliche_felder += (10*position);
				position = 0;
			} else {
				position -= felder;
				restliche_felder += (10*felder);
			}
			fehlversuche = 0;
			return true;
		} else {
			return false;
		}
	} else {
		restliche_felder -= kosten;
		position += felder;
		return true;
	}
}
