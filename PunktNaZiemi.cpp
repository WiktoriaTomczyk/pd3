//
// Created by Wiktoria on 2016-05-12.
//

#include "PunktNaZiemi.h"

PunktNaZiemi::PunktNaZiemi(Kat * dlugosc, Kat * szerokosc){
    this->dlugosc = new Kat(dlugosc);
    this->szerokosc = new Kat(szerokosc);
}

PunktNaZiemi::PunktNaZiemi(){
    this->dlugosc = new Kat();
    this->szerokosc = new Kat();
}

Kat PunktNaZiemi::getDlugosc(){
    return dlugosc;
}

Kat PunktNaZiemi::getSzerokosc(){
    return szerokosc;
}

void PunktNaZiemi::setDlugosc(Kat dlugosc){
    *this->dlugosc = dlugosc;
}

void PunktNaZiemi::setSzerooksc(Kat szerokosc){
    *this->szerokosc = szerokosc;
}

string PunktNaZiemi::toString(){
    stringstream sstm;

    sstm << (szerokosc->getZnak() < 0 ? " S " : " N ") << szerokosc->wartoscBezwzgledna()->toString()
    << (dlugosc->getZnak() < 0 ? " W " : " E ") << dlugosc->wartoscBezwzgledna()->toString();
    return sstm.str();
}

bool PunktNaZiemi::operator==(PunktNaZiemi p){
    return ( (*dlugosc == *(p.dlugosc)) && (*szerokosc == *(p.szerokosc)) );
}

bool PunktNaZiemi::operator!=(PunktNaZiemi p){
    return ( * dlugosc != * (p.dlugosc) || * szerokosc != * (p.szerokosc) );
}

PunktNaZiemi::~PunktNaZiemi(){
    delete dlugosc;
    delete szerokosc;
}
