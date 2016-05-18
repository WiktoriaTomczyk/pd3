//
// Created by Wiktoria on 2016-05-12.
//

#include "KsztaltZWysokosciami.h"

KsztaltZWysokosciami::KsztaltZWysokosciami() {

}

KsztaltZWysokosciami &KsztaltZWysokosciami::operator=(const KsztaltZWysokosciami &ksztalt) {
    return *(new KsztaltZWysokosciami(ksztalt));
}

KsztaltZWysokosciami::KsztaltZWysokosciami(const KsztaltZWysokosciami &ksztalt) {
    for (unsigned long i = 0; i < ksztalt.rozmiar(); ++i) {
        wektor.push_back(ksztalt.pobierz(i));
    }
}

KsztaltZWysokosciami::~KsztaltZWysokosciami() {
    for (int i = 0; i < wektor.size(); ++i) {
        delete wektor[i];
    }

    wektor.clear();
}

void KsztaltZWysokosciami::dodaj(PunktNaZiemi *p) {
    wektor.push_back(p);
}

unsigned long KsztaltZWysokosciami::rozmiar() const{
    return wektor.size();
}

PunktNaZiemi *KsztaltZWysokosciami::pobierz(unsigned long i) const {
    return wektor[i];
}

void KsztaltZWysokosciami::usun() {
    delete wektor[wektor.size()-1];
    wektor.pop_back();
}

void KsztaltZWysokosciami::wyswietl() {
    for (int i = 0; i < wektor.size(); ++i) {
        cout << wektor[i]->toString() << endl;
    }
}

















