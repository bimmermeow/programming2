//#include "aufzug.h"

//using namespace Aufzug;

Aufzug::Aufzug() {
	ges_stockwerke = 5;
	akt_stockwerk = 0;
}
void Aufzug::oberstesStockwerk(int stockwerk) {
	ges_stockwerke = stockwerk;
}
void Aufzug::reset() {
  akt_stockwerk = 0;
}
void Aufzug::auf() {
	if(akt_stockwerk == ges_stockwerke) {
	} else {
		akt_stockwerk++;
	}
}
void Aufzug::ab() {
	if(akt_stockwerk == 0) {
	} else {
		akt_stockwerk--;
	}
}
int Aufzug::stockwerk() {
	return akt_stockwerk;
}
