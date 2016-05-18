//
// Created by Wiktoria on 2016-05-12.
//

#include "PunktZWysokoscia.h"

PunktZWysokoscia::PunktZWysokoscia(Kat dlugosc, Kat szerokosc, double wysokosc){
    this->dlugosc = new Kat(dlugosc);
    this->szerokosc = new Kat (szerokosc);
    this->wysokosc = wysokosc;
}

PunktZWysokoscia::PunktZWysokoscia(Kat dlugosc, Kat szerokosc){
    this->dlugosc = new Kat(dlugosc);
    this->szerokosc = new Kat(szerokosc);
    this->wysokosc = 0;
}

PunktZWysokoscia::PunktZWysokoscia(){
    this->dlugosc = new Kat();
    this->szerokosc = new Kat();
    this->wysokosc = 0;
}

string PunktZWysokoscia::toString(){
    stringstream sstm;

    sstm << (szerokosc->getZnak() < 0 ? "S " : "N ") << szerokosc->wartoscBezwzgledna()->toString()
    << (dlugosc->getZnak() < 0 ? " W " : " E ") << dlugosc->wartoscBezwzgledna()->toString()
    << " " << abs(wysokosc) << (wysokosc < 0 ? " m p.p.m" : " m n.p.m");
    return sstm.str();
}

bool PunktZWysokoscia::operator==(PunktZWysokoscia p){
    return ( (*dlugosc == *(p.dlugosc)) && (*szerokosc == *(p.szerokosc)) && (wysokosc == (p.wysokosc)));
}

bool PunktZWysokoscia::operator!=(PunktZWysokoscia p){
    return ( * dlugosc != * (p.dlugosc) || * szerokosc != * (p.szerokosc) || (wysokosc != (p.wysokosc)));
}
