class Alarmmelder : public Beobachter {
public:
	Alarmmelder (float obere, float untere);
	void aktualisiere ();
private:
	float untere_grenze;
	float obere_grenze;
	float beobachteter_kurs;
};
