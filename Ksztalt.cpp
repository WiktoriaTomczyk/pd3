//
// Created by Wiktoria on 2016-05-18.
//

#include "Ksztalt.h"


Ksztalt::Ksztalt() {
}

vector <PunktNaZiemi>* Ksztalt::getWektor() {
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
