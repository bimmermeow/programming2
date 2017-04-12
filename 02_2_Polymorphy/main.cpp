#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
#include <termios.h>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "getch.cpp"

#include "spielfigur.cpp"
#include "hase.cpp"
#include "igel.cpp"
#include "spiel.cpp"

using namespace std;

int main() {
	char eschar = 27;
	cout << eschar << "[1m" << "Hase vs. Igel - ein epischer Kampf" << eschar << "[0m" << endl;
	cout << "Anzahl der zu erreichenden Felder angeben: ";
	int runden;
	cin >> runden;
	cout << "Anzahl der teilnehmenden Hasen angeben (es dürfen maximal 20 Spielfiguren im Spiel sein): ";
	int anzHasen;
	cin >> anzHasen;
	cout << "Anzahl der teinehmenden Igeln angeben (es dürfen noch maximal " << (20-anzHasen) << " Igel teilnehmen): ";
	int anzIgel;
	cin >> anzIgel;
	cout << endl << "Fertig! Immer eine Taste drücken, um eine Runde weiter zu spielen" << endl;
	Spiel spiel(runden, anzHasen, anzIgel);
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
