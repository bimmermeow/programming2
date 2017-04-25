using namespace std;

class Spielfeld {
public:
	int Ereignisfelder[100];
	Spielfeld(int anz_felder);
	bool getEreignisfeld(int feld_nr);
	int getEreignis();
};
