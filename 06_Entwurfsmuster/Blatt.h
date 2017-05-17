#include "Komponente.h"
#include <iostream>
using namespace std;

class Blatt : public Komponente {
   int zahl;
public:
   Blatt(int z=0){zahl=z;}
   ~Blatt(){}
   void print(){ cout << zahl;}
   int summe(){ return zahl;}
};
