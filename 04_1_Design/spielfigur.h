
using namespace std;

class Spielfigur {
public:
	int position;
	int vorrat;
	int vvvlz;
	Spielfigur();
	int getPosition();
	int getVorrat();
	void RVVLZWD();
	virtual string getKlassenname() = 0;
	virtual bool ziehe(int felder) = 0;
};
