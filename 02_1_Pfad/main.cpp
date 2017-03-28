//g++ -std=c++11 main.cpp

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
#include <termios.h>
#include <stdio.h>
#include "getch.cpp"

#include "pfad.cpp"
//#include "punkt.cpp"

int main() {
	Pfad meinPfad(10);
	Punkt ersterPunkt(5,0);
	Punkt zweiterPunkt(1,6);
	meinPfad.insertKoord(ersterPunkt);
	meinPfad.insertKoord(zweiterPunkt);
	meinPfad.printKoord(0);
	meinPfad.printKoord(1);
	getch();
	return 0;
}
