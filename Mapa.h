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
    Mapa(const Mapa& mapa);
    Mapa& operator=(const Mapa &mapa);
    ~Mapa();
    vector <Ksztalt> *getWektor();
    void dodaj(Ksztalt ksztalt);
    void usun();
    void wyswietl();
    unsigned long rozmiar() const;
    Ksztalt getKsztalt(int i) const;

};


#endif //WIKTORIA_TOMCZYK_PD3_MAPA_H