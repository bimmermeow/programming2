#include "Blatt.h"
#include "Kompositum.h"
#include <iostream>

int main(){
	//(1+2)*3
	Blatt b1(1);
	Blatt b2(2);
	Blatt b3(3);

	Kompositum km('*');
	Kompositum kp('+');

	kp.fuegeHinzu(&b1);
	kp.fuegeHinzu(&b2);
	km.fuegeHinzu(&kp);
	km.fuegeHinzu(&b3);

	b1.print();
	std::cout << endl;
	b2.print();
	std::cout << endl;
	b3.print();
	std::cout << endl;

	kp.print();
	std::cout << endl;
	km.print();
	std::cout << endl;
	// std::cout <<  k1.summe() << endl;

	return 0;
}
