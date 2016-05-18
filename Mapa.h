//
// Created by Wiktoria on 2016-05-12.
//

#ifndef WIKTORIA_TOMCZYK_PD3_MAPA_H
#define WIKTORIA_TOMCZYK_PD3_MAPA_H

#include "Ksztalt.h"

using namespace std;

class Mapa {
protected:
    vector <Ksztalt> wektor;
public:
    Mapa();
    vector <Ksztalt> *getWektor();
    void dodaj(Ksztalt ksztalt);
    void usun();
    void wyswietl();

};


#endif //WIKTORIA_TOMCZYK_PD3_MAPA_H
