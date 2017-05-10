#include "Jaeger.h"
#include <iostream>
using namespace std;

// Konstruktor
Jaeger::Jaeger(Hase* h) {
   // nur echte Hasen beobachten
   if (h != 0) {
        // sich den beobachteten Hasen merken
        derArmeHase = h;
        // sich beim Hasen als Beobachter anmelden
        derArmeHase->anmelden((Beobachter*)this);
   }
}

// Ausgabefunktion
void Jaeger::message() { 
	cout << "Hase ist auf Feld " << 
                 derArmeHase->lieferePos() <<"!" << endl; 
}
    
// wenn aktualisiert werden soll, Message ausgeben
void Jaeger::aktualisiere(){
	message();
}
