//
// Created by Wiktoria on 2016-05-12.
//

#ifndef WIKTORIA_TOMCZYK_PD3_PUNKTZWYSOKOSCIA_H
#define WIKTORIA_TOMCZYK_PD3_PUNKTZWYSOKOSCIA_H

#include <string>
#include "../Kat.h"
#include "../PunktNaZiemi.h"

using namespace std;

class PunktZWysokoscia : public PunktNaZiemi {
private:
    double wysokosc;
public:
    PunktZWysokoscia(Kat dlugosc, Kat szerokosc, double wysokosc);
    PunktZWysokoscia(Kat dlugosc, Kat szerokosc);
    PunktZWysokoscia();
    string toString();
    bool operator==(PunktZWysokoscia p);
    bool operator!=(PunktZWysokoscia p);
};


#endif //WIKTORIA_TOMCZYK_PD3_PUNKTZWYSOKOSCIA_H
