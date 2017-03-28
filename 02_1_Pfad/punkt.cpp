#include <iostream>

using namespace std;

class Punkt{
	int _x; // X−Koordinate
	int _y; // Y−Koordinate
public:
	Punkt(int px, int py) {
		cout << px << " " << py;
		_x = px;
		_y = py;
		cout << _x << " " << _y;
	}
	void print (){
		cout << '(' << _x << ',' << _y << ')' << endl;
	}
};
