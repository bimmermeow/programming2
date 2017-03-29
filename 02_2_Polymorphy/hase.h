#pragma once

class Hase : public Spielfigur {
private:
	int karotten;
	int fehlversuche;
public:
	Hase();
	bool ziehe(int felder);
	int getKarotten();
};
