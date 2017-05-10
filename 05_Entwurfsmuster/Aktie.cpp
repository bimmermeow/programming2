#include "Aktie.h"
#include "BeobachterZiel.h"

Aktie::Aktie (string aname, string aisin, float akurs) {
	name = aname;
	isin = aisin;
	kurs = akurs;
}
float Aktie::get_kurs() {
	return kurs;
}
void Aktie::setze_kurs(float akurs) {
	kurs = akurs;
	benachrichtigeAlle();
}
