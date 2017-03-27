#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
#include <termios.h>
#include <stdio.h>
#include "getch.cpp"
#include "aufzug.h"
#include "aufzug.cpp"

using namespace std;

int main()
{
  cout << "Willkommen im Aufzug!\nEine Zahl angeben, um einen Aufzug mit der angegebenen Anzahl an Stockwerken zu bauen.";
  int sw;
  cin >> sw;
  Aufzug hans_peter;
  hans_peter.oberstesStockwerk(sw);
  cout << "Ein Aufzug mit " << sw << " Stockwerken wurde gebaut.\n";
  cout << "Sie befinden sich im " << hans_peter.stockwerk() << ". Stock.\n\n";

  cout << "h = hoch, r = runter, x = aussteigen\n\n";

  while(1<2) {
    string eingabe;
  	cin >> eingabe;
  	if(eingabe == "h") {
  			cout << "Ein Stockwerk nach oben fahren...\n";
  			hans_peter.auf();
  			cout << "Sie befinden sich nun im " << hans_peter.stockwerk() << ". Stock.\n\n";
  	} else if(eingabe == "r") {
  			cout << "Ein Stockwerk nach unten fahren...\n";
  			hans_peter.ab();
  			cout << "Sie befinden sich nun im " << hans_peter.stockwerk() << ". Stock.\n\n";
  	} else if(eingabe == "x") {
  			cout << "Sie befinden sich nun im " << hans_peter.stockwerk() << ". Stock.\n";
  	    hans_peter.reset();
  	    cout << "Der Aufzug wurde in den " << hans_peter.stockwerk() << ". Stock gefahren.  Vielen Dank für die Fahrt im Aufzug\n\n";
  	    break;
  	} else {
  	    cout << "Bitte nur 'h', 'r' oder 'x' verwenden.\n\n";
  	}
  }
}
