#include <iostream>
using namespace std;

#include "Hase.h"
#include "Jaeger.h"

int main() {
    // erzeuge ein Hasenobjekt
    Hase h;

    // erzeuge ein Jaegerobjekt
    Jaeger j(&h);

    // erzeuge ein zweites Jaegerobjekt
    Jaeger j1(&h);

    // setze den Hasen
    h.setzePos(27);

    // setze den Hasen ein weiteres Mal
    h.setzePos(42);

    // setze den Hasen ein weiteres Mal
    h.setzePos(13);

}
