//
// Created by Wiktoria on 2016-05-18.
//

#ifndef WIKTORIA_TOMCZYK_PD3_PUNKT_H
#define WIKTORIA_TOMCZYK_PD3_PUNKT_H

#include "Kat.h"

using namespace std;

class Punkt {
public:
    virtual string toString()= 0;
    virtual bool operator==(const Punkt& punkt) = 0;
};

#endif //WIKTORIA_TOMCZYK_PD3_PUNKT_H
