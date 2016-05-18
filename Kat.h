//
// Created by Wiktoria on 2016-05-12.
//

#ifndef WIKTORIA_TOMCZYK_PD3_KAT_H
#define WIKTORIA_TOMCZYK_PD3_KAT_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

class Kat {
private:
    short int znak; // przyjmuje wartosci 1 dla + oraz -1 dla -
    unsigned short int stopnie;
    unsigned short int minuty;
    unsigned short int sekundy;

public:
    Kat(short int znak, unsigned short int stopnie, unsigned short int minuty, unsigned short int sekundy);
    Kat(short int znak, unsigned short int stopnie, unsigned short int minuty);
    Kat(short int znak, unsigned short int stopnie);
    Kat();
    Kat( Kat * inny);

    short int getZnak();
    unsigned short int getStopnie();
    unsigned short int getMinuty();
    unsigned short int getSekundy();

    void setZnak(short int znak);
    void setStopnie(unsigned short int stopnie);
    void setMinuty(unsigned short int minuty);
    void setSekundy(unsigned short int sekundy);

    string toString();

    Kat operator+(Kat k);
    Kat operator-(Kat k);
    bool operator>(Kat k);
    bool operator>=(Kat k);
    bool operator<(Kat k);
    bool operator<=(Kat k);
    bool operator==(Kat k);
    bool operator!=(Kat k);

    Kat * wartoscBezwzgledna();

    ~Kat(){};

    // funkcje pomocnicze

    double naDzies();
    Kat zDzies(double d);
};


#endif //WIKTORIA_TOMCZYK_PD3_KAT_H
