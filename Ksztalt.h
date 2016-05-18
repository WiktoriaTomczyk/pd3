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
    Ksztalt(const Ksztalt &ksztalt);
    vector <PunktNaZiemi>* getWektor();
    unsigned long rozmiar() const;
    void dodaj(PunktNaZiemi punktNaZiemi);
    void usun();
    void wyswietl();
    bool czyZamkniety();
    PunktNaZiemi pobierz(int i) const;
    ~Ksztalt();
    Ksztalt operator=(const Ksztalt &ksztalt);

};

#endif //WIKTORIA_TOMCZYK_PD3_KSZTALT_H
