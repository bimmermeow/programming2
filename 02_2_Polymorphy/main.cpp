#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
#include <termios.h>
#include <stdio.h>
#include "getch.cpp"

#include "spielfigur.cpp"
#include "hase.cpp"
#include "igel.cpp"
#include "spiel.cpp"

using namespace std;

int main() {
	cout << "Hase vs. Igel - ein epischer Kampf" << endl;
	std::cout << "Anzahl der zu erreichenden Felder angeben: ";
	int runden;
	cin >> runden;
	cout << endl << "Immer eine Taste drücken, um eine Runde weiter zu spielen" << endl;
	Spiel spiel(runden);
	spiel.getStand();
	while(1<2) {
		getch();
		spiel.macheZug();
		if(spiel.getStand()) {
			break;
		}
	}
	cout << endl << endl;
	return 0;
}
