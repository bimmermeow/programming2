#include "punkt.cpp"

class Pfad {
private:
	Punkt pfad[];
	int akt_index;
public:
	Pfad(int anz_punkte);
	void insertKoord(Punkt& p);
	void printKoord(int i);
};
