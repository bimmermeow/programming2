#pragma once

#include "Beobachter.h"
#include "Hase.h"

class Jaeger : public Beobachter {
    Hase* derArmeHase;
public:
    Jaeger(Hase* h);
    void message();
    void aktualisiere();
};
