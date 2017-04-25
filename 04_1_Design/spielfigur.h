
using namespace std;

class Spielfigur {
public:
	int position;
	int vorrat;
	Spielfigur();
	int getPosition();
	int getVorrat();
	virtual string getKlassenname() = 0;
	virtual bool ziehe(int felder, bool vorrat_abziehen = true) = 0;

};
