//
// Created by Wiktoria on 2016-05-19.
//

#ifndef WIKTORIA_TOMCZYK_PD3_KSZTALTZWYSOKOSCIAMI_H
#define WIKTORIA_TOMCZYK_PD3_KSZTALTZWYSOKOSCIAMI_H

#include <vector>
#include "PunktNaZiemi.h"

class KsztaltZWysokosciami {
protected:
    vector <PunktNaZiemi*> wektor;
public:
    KsztaltZWysokosciami();
    KsztaltZWysokosciami(const KsztaltZWysokosciami &ksztalt);
    KsztaltZWysokosciami& operator=(const KsztaltZWysokosciami &ksztalt);
    ~KsztaltZWysokosciami();
    void dodaj(PunktNaZiemi *p);
    void usun();
    unsigned long rozmiar() const;
    PunktNaZiemi * pobierz(unsigned long i) const;
    void wyswietl();
};


#endif //WIKTORIA_TOMCZYK_PD3_KSZTALTZWYSOKOSCIAMI_H
