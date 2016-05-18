//
// Created by Wiktoria on 2016-05-12.
//

#include "Kat.h"

Kat::Kat(short int znak, unsigned short int stopnie, unsigned short int minuty, unsigned short int sekundy){

    if(stopnie > 180 || minuty >= 60 || sekundy >= 60){
        cerr << " BLAD!! PROBA STWORZENIA BLEDNEGO KATA!";
        exit(1);
    }

    this->znak = znak;
    this->stopnie = stopnie;
    this->minuty = minuty;
    this->sekundy = sekundy;
}

Kat::Kat(short int znak, unsigned short int stopnie, unsigned short int minuty){

    if(stopnie > 180 || minuty >= 60){
        cerr << " BLAD!! PROBA STWORZENIA BLEDNEGO KATA!";
        exit(1);
    }

    this->znak = znak;
    this->stopnie = stopnie;
    this->minuty = minuty;
    this->sekundy = 0;
}

Kat::Kat(short int znak, unsigned short int stopnie){

    if(stopnie > 180){
        cerr << " BLAD!! PROBA STWORZENIA BLEDNEGO KATA!";
        exit(1);
    }

    this->znak = znak;
    this->stopnie = stopnie;
    this->minuty = 0;
    this->sekundy = 0;
}

Kat::Kat(){
    this->znak = 1;
    this->stopnie = 0;
    this->minuty = 0;
    this->sekundy = 0;
}

Kat::Kat(Kat * inny) : Kat(inny->znak, inny->stopnie, inny->minuty, inny->sekundy){};

short int Kat::getZnak(){
    return znak;
}

unsigned short int Kat::getStopnie(){
    return stopnie;
}

unsigned short int Kat::getMinuty(){
    return minuty;
}

unsigned short int Kat::getSekundy(){
    return sekundy;
}

void Kat::setZnak(short int znak){
    this->znak = znak;
}

void Kat::setStopnie(unsigned short int stopnie){
    this->stopnie = stopnie;
}

void Kat::setMinuty(unsigned short int minuty){
    this->minuty = minuty;
}

void Kat::setSekundy(unsigned short int sekundy){
    this->sekundy = sekundy;
}

string Kat::toString(){
    stringstream sstm;

    sstm << (znak < 0 ? "-" : "") << stopnie << "* " << minuty << "' " << sekundy << "\" ";
    return sstm.str();
}

double Kat::naDzies(){
    return (stopnie + (minuty/60.0) + (sekundy/3600.0));
}

Kat Kat::zDzies(double d){
    unsigned short int stopni = floor(d);
    double m = (fmod(d, stopni)) * 60;
    unsigned short int minut = round(m);
    double s = (fmod(m, minut)) * 60;
    unsigned short int sekund = round(s);

    return Kat(1, stopni, minut, sekund);
}

Kat Kat::operator+(Kat k){

    short int z1 = this->getZnak();
    short int z2 = k.getZnak();
    short int z3 = 0;

    double k1 = this->naDzies();
    double k2 = k.naDzies();
    double k3 = 0;

    if(z1 == 1 && z2 !=1 ){
        k3 = (k1 - k2);
        if(k3 >= 0){
            z3 = 1;
        }else{
            z3 = -1;
        }
    }else{
        if(z1 != 1 && z2 == 1){
            k3 = k1 + k2;
            if(k3 >= 0){
                z3 = 1;
            }else{
                z3 = -1;
            }
        }else{
            if(z1 == 1 && z2 == 1){
                k3 = k1 + k2;
                z3 = 1;
            }else{
                k3 = k1 + k2;
                z3 = -1;
            }
        }
    }

    Kat kat = zDzies(k3);
    kat.setZnak(z3);

    return kat;
}

Kat Kat::operator-(Kat k){

    short int z1 = this->znak;
    short int z2 = k.znak;
    short int z3 = 0;

    double k1 = this->naDzies();
    double k2 = k.naDzies();
    double k3 = 0;

    if(z1 == 1 && z2 !=1 ){
        k3 = (k1 + k2);
        z3 = 1;
    }else{
        if(z1 != 1 && z2 == 1){
            k3 = - k1 - k2;
            z3 = -1;
        }else{
            if(z1 == 1 && z2 == 1){
                k3 = k1 - k2;
                if(k3 >= 0){
                    z3 = 1;
                }else{
                    z3 = -1;
                }
            }else{
                k3 = - k1 + k2;
                if(k3 >= 0){
                    z3 = 1;
                }else{
                    z3 = -1;
                }
            }
        }
    }

    Kat kat = zDzies(k3);
    kat.setZnak(z3);

    return kat;
}

bool Kat::operator>(Kat k){
    double k1 = this->naDzies();
    double k2 = k.naDzies();

    if(this->getZnak() < 0){
        k1 = -k1;
    }
    if(k.getZnak() < 0){
        k2 = -k2;
    }

    return (k1 > k2);
}

bool Kat::operator>=(Kat k){
    double k1 = this->naDzies();
    double k2 = k.naDzies();

    if(this->getZnak() < 0){
        k1 = -k1;
    }
    if(k.getZnak() < 0){
        k2 = -k2;
    }

    return (k1 >= k2);
}

bool Kat::operator<(Kat k){
    double k1 = this->naDzies();
    double k2 = k.naDzies();

    if(this->getZnak() < 0){
        k1 = -k1;
    }
    if(k.getZnak() < 0){
        k2 = -k2;
    }

    return (k1 < k2);
}

bool Kat::operator<=(Kat k){
    double k1 = this->naDzies();
    double k2 = k.naDzies();

    if(this->getZnak() < 0){
        k1 = -k1;
    }
    if(k.getZnak() < 0){
        k2 = -k2;
    }

    return (k1 <= k2);
}

bool Kat::operator==(Kat k){
    double k1 = this->naDzies();
    double k2 = k.naDzies();

    if(this->getZnak() < 0){
        k1 = -k1;
    }
    if(k.getZnak() < 0){
        k2 = -k2;
    }

    return (k1 == k2);
}

bool Kat::operator!=(Kat k){
    double k1 = this->naDzies();
    double k2 = k.naDzies();

    if(this->getZnak() < 0){
        k1 = -k1;
    }
    if(k.getZnak() < 0){
        k2 = -k2;
    }

    return (k1 != k2);
}

Kat * Kat::wartoscBezwzgledna(){
    return new Kat(1, stopnie, minuty, sekundy);
}
