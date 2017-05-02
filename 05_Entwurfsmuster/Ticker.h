class Ticker : public Beobachter {
public:
	Ticker ();
	void aktualisiere ();
private:
	float beobachteter_kurs;
};
