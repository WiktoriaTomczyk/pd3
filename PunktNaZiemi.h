//
// Created by Wiktoria on 2016-05-18.
//

#ifndef WIKTORIA_TOMCZYK_PD3_PUNKTNAZIEMI_H
#define WIKTORIA_TOMCZYK_PD3_PUNKTNAZIEMI_H

#include "Kat.h"

using namespace std;

class PunktNaZiemi {
protected:
    Kat * dlugosc; // znak 1 dla E oraz -1 dla W
    Kat * szerokosc; // znak 1 dla N oraz -1 dla S

public:
    PunktNaZiemi(Kat * dlugosc, Kat * szerokosc);
    PunktNaZiemi();

    Kat getDlugosc();
    Kat getSzerokosc();

    void setDlugosc(Kat dlugosc);
    void setSzerooksc(Kat szerokosc);

    virtual string toString();

    virtual bool operator==(PunktNaZiemi p);
    virtual bool operator!=(PunktNaZiemi p);

    ~PunktNaZiemi();
};


#endif //WIKTORIA_TOMCZYK_PD3_PUNKTNAZIEMI_H
