class Aktie : public BeobachterZiel {
public:
	Aktie ();
	float get_kurs ();
	void setze_kurs (float kurs);
	string name;
	string isin;
private:
	float kurs;
};
