#include "Komponente.h"
#include <iostream>
using namespace std;

#define MAXKOMP 100

class Kompositum: public Komponente {
     Komponente* komponenten[MAXKOMP];
     int aktuelleAnzahl;
     int zahl;
public:
     Kompositum(int z=0);
    ~Kompositum();
     bool fuegeHinzu(Komponente* k);
     void print();
     int summe();
};
