#pragma once

class Hase {
private:
	int karotten;
	int position;
	int fehlversuche;
public:
	Hase();
	bool ziehe(int felder);
	int getPosition();
	int getKarotten();
	int getVorrat();
};
