#pragma once

const int MAXBEOB=20;

class Beobachter;

class BeobachterZiel
{
	int aktuelleAnzahl;
	Beobachter* beobachterFeld[MAXBEOB];
public:
	BeobachterZiel(void);
	bool anmelden(Beobachter* beob);
	bool abmelden(Beobachter* beob) {
		//TODO: vernuenftige implementierung
		return false;
	}
	void benachrichtigeAlle();

public:
	~BeobachterZiel(void);
};
