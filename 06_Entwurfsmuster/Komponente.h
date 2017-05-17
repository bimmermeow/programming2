#pragma once

class Komponente {
public:
   Komponente(){}
   ~Komponente(){}

   virtual void print() = 0;
   virtual int summe() = 0;
};
