#include <iostream>

using namespace std;

class Punkt{
	int _x; // X−Koordinate
	int _y; // Y−Koordinate
public:
	Punkt(int px=0, int py=0) {
		_x = px;
		_y = py;
	}
	void print (){
		cout << '(' << _x << ',' << _y << ')' << endl;
	}
};
