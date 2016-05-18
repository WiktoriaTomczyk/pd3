//
// Created by Wiktoria on 2016-05-12.
//

#include "Mapa.h"

Mapa::Mapa() {
}

vector <Ksztalt> * Mapa::getWektor() {
    return &wektor;
}


void Mapa::dodaj(Ksztalt ksztalt) {
    wektor.push_back(ksztalt);
}

void Mapa::usun() {
    wektor.pop_back();
}

void Mapa::wyswietl() {
    for (int i = 0; i < wektor.size(); ++i) {
        wektor[i].wyswietl();
    }
}
