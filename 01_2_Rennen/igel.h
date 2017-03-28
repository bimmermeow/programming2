#pragma once

class Igel {
private:
	int salat;
	int position;
	int restliche_felder;
public:
	Igel();
	bool ziehe(int felder);
	int getPosition();
	int getSalat();
	int getVorrat();
};
