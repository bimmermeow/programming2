#pragma once

class Beobachter
{
public:
	Beobachter(void);
	virtual void aktualisiere() = 0;
	~Beobachter(void);
};
