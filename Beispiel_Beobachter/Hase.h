#pragma once

#include "BeobachterZiel.h"

class Hase : public BeobachterZiel {

	int pos;
public:
	Hase();
	void setzePos(int i);
	int lieferePos();
};
