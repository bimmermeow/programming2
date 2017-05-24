#include "Blatt.h"
#include "Kompositum.h"
#include <iostream>

using namespace std;

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
	cout << endl;
	b2.print();
	cout << endl;
	b3.print();
	cout << endl;

	kp.print();
	cout << endl;
	km.print();
	cout << endl;
	cout << kp.summe() << endl;
	cout << km.summe() << endl;
	return 0;
}
