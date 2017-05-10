#include <string>
#include <iostream>

#include "BeobachterZiel.cpp"
#include "Beobachter.cpp"
#include "Ticker.cpp"
#include "Alarmmelder.cpp"
#include "Aktie.cpp"

using namespace std;

int main() {
	//TODO: main schreiben, klassendiagramm aktualisieren
	Aktie* adidas = new Aktie("Adidas", "DE000A1EWWW0", 183.33);
	Aktie* bmw = new Aktie("BMW", "DE0005190003", 87.92);
	Ticker* pticker = new Ticker(bmw);
	bmw->setze_kurs(90.45);
	Alarmmelder* amelder = new Alarmmelder(190, 160, adidas);
	adidas->setze_kurs(185.43);
	adidas->setze_kurs(191);
	adidas->setze_kurs(170);
	adidas->setze_kurs(156);
	bmw->setze_kurs(95.34);
	return 0;
}
