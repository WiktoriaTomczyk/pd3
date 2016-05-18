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

Mapa::Mapa(const Mapa &mapa) {
    for (unsigned long i = 0; i < mapa.rozmiar(); ++i) {
        this->wektor.push_back(mapa.getKsztalt(i));
    }
}

Mapa &Mapa::operator=(const Mapa &mapa) {
    return *(new Mapa(mapa));
}

Mapa::~Mapa() {
    wektor.clear();
}

unsigned long Mapa::rozmiar() const {
    return wektor.size();
}

Ksztalt Mapa::getKsztalt(int i) const{
    return wektor[i];
}






