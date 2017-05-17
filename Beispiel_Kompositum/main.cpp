#include "Blatt.h"
#include "Kompositum.h"
#include <iostream>

int main(){

  Blatt b1(22);
  Blatt b2(12);
  Blatt b3(49);

  Kompositum k1(4);
  Kompositum k2(32);
  Kompositum k3(42);

  k2.fuegeHinzu(&b1);
  k3.fuegeHinzu(&b2);
  k3.fuegeHinzu(&b3);

  k1.fuegeHinzu(&k2);
  k1.fuegeHinzu(&k3);


  b1.print();
  std::cout << endl;  

  k2.print();
  std::cout << endl;  

  k1.print();
  std::cout << endl;  

  std::cout <<  k1.summe() << endl; 

  return 0;
}
