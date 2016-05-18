//
// Created by Wiktoria on 2016-05-12.
//

#ifndef WIKTORIA_TOMCZYK_PD3_KSZTALT_H
#define WIKTORIA_TOMCZYK_PD3_KSZTALT_H

#include <vector>
#include "PunktNaZiemi.h"

using namespace std;

class Ksztalt {
protected:
    vector <PunktNaZiemi> wektor;
public:
    Ksztalt();
    vector <PunktNaZiemi>* getWektor();
    void dodaj(PunktNaZiemi punktNaZiemi);
    void usun();
    void wyswietl();
    bool czyZamkniety();

};

#endif //WIKTORIA_TOMCZYK_PD3_KSZTALT_H
