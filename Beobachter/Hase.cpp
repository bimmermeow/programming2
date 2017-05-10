#include "BeobachterZiel.h"
#include "Hase.h"

// Konstruktor
Hase::Hase(){
   pos = 0;
}

// setze Position und benachrichtige alle Beobachter
void Hase::setzePos(int i) { 
   pos = i; 
   benachrichtigeAlle();
}

// liefere aktuelle Position auf Nachfrage
int Hase::lieferePos() { return pos; }
