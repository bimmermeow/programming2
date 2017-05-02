class BeobachterZiel {
public:
	BeobachterZiel ();
	int anmelden (Beobachter* b);
	void abmelden (int index);
	void benachrichtigeAlle ();
private:
	Beobachter* beobachter[50];
	int akt_index;
};
