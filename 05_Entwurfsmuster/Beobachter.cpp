#include "Beobachter.h"

Beobachter::Beobachter (BeobachterZiel* ziel = 0) {
	zielklasse = ziel;
}
void Beobachter::set_ziel(BeobachterZiel* ziel) {
	zielklasse = ziel;
}
