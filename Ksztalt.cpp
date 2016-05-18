//
// Created by Wiktoria on 2016-05-12.
//

#include "Ksztalt.h"


Ksztalt::Ksztalt() {
}

vector <PunktNaZiemi>* Ksztalt::getWektor(){
    return &wektor;
}


void Ksztalt::dodaj(PunktNaZiemi punktNaZiemi) {
    wektor.push_back(punktNaZiemi);
}

void Ksztalt::usun() {
    wektor.pop_back();
}

void Ksztalt::wyswietl() {
    for (int i = 0; i < wektor.size(); ++i) {
        cout<<wektor[i].toString()<<endl;
    }
}

bool Ksztalt::czyZamkniety() {
    if(wektor.size() == 0) return false;
    return (wektor[0] == wektor[(wektor.size()-1)]);
}

Ksztalt::Ksztalt(const Ksztalt &ksztalt) {
    for (int i = 0; i < ksztalt.rozmiar(); ++i) {
        wektor.push_back(ksztalt.pobierz(i));
    }
}

PunktNaZiemi Ksztalt::pobierz(int i) const{
    return wektor[i];
}

Ksztalt::~Ksztalt() {
    wektor.clear();
}

Ksztalt& Ksztalt::operator=(const Ksztalt &ksztalt) {
    return *(new Ksztalt(ksztalt));
}

unsigned long Ksztalt::rozmiar() const {
    return wektor.size();
}


