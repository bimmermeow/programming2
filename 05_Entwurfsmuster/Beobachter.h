class Beobachter {
private:
	BeobachterZiel* zielklasse;
public:
	Beobachter (BeobachterZiel* ziel = 0);
	void set_ziel(BeobachterZiel* ziel);
	virtual void aktualisiere ();
};
