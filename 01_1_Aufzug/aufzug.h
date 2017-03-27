class Aufzug {
	public:
		Aufzug();
		void oberstesStockwerk(int stockwerk);
		void auf();
		void ab();
		void reset();
		int stockwerk();
	private:
		int ges_stockwerke;
		int akt_stockwerk;
};