#pragma once

class Hase : public Spielfigur {
public:
	int fehlversuche;
	Hase();
	string getKlassenname();
	bool ziehe(int felder);
};
