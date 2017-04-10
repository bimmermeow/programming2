#pragma once

class Hase : public Spielfigur {
public:
	int fehlversuche;
	Hase();
	bool ziehe(int felder);
};
