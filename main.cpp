#include "Kat.h"
#include "PunktNaZiemi.h"
#include "Ksztalt.h"
#include "PunktZWysokoscia.h"
#include "Mapa.h"

void testMapa() ;

using namespace std;

int main() {
/*
    // ======================== TEST KLASY KAT ================================
    short int znak = 1;
    unsigned short int stopnie = 52;
    unsigned short int minuty = 12;
    unsigned short int sekundy = 8;

    Kat kat1 = new Kat(znak, stopnie, minuty, sekundy);

    cout << kat1.toString() << endl;

    znak = -1;
    stopnie = 10;
    minuty = 2;
    sekundy = 6;

    Kat kat2 = new Kat(znak, stopnie, minuty, sekundy);

    cout << kat2.toString() << endl;

    cout << (kat1 + kat2).toString() << endl;
    cout << (kat1 - kat2).toString() << endl;

    cout << (kat1 > kat2) << endl;
    cout << (kat1 < kat2) << endl;
    cout << (kat1 == kat2) << endl;
    cout << (kat1 != kat2) << endl;

    // =================== TEST KLASY PUNKT NA ZIEMI ===========================

    Kat * wsk1 = &kat1;
    Kat * wsk2 = &kat2;

    PunktNaZiemi pnz1 = PunktNaZiemi(wsk1, wsk2);
    PunktNaZiemi pnz2 = PunktNaZiemi(wsk2, wsk1);

    cout << wsk1->toString() << endl;
    cout << wsk2->toString() << endl;

    cout << "Czy rowne?: "<<(wsk1==wsk2) << endl;
    cout << "Czy nierowne?: "<<(wsk1!=wsk2) << endl;

    // ======================== TEST KLASY KSZTALT ==============================

    Ksztalt ksz1;

    // pomocniczo:
    Kat * wsk3 = new Kat(1, 50, 13, 10);
    Kat * wsk4 = new Kat(1, 52, 12, 12);

    PunktNaZiemi pnz3 = PunktNaZiemi(wsk3, wsk4);

    ksz1.dodaj(pnz1);
    ksz1.dodaj(pnz2);

    ksz1.usun();

    ksz1.dodaj(pnz3);
    ksz1.dodaj(pnz1);

    cout << "czy zamkniety?: " << ksz1.czyZamkniety() << endl;

    //==================== TEST KLASY PUNKT Z WYSOKOSCIA =======================

    PunktZWysokoscia pzw1 = PunktZWysokoscia(kat1, kat2, 212);
    PunktZWysokoscia pzw2 = PunktZWysokoscia(kat2, kat1);

    cout << pzw1.toString() << endl;
    cout << pzw2.toString() << endl;

    cout << "Czy rowne?: " << (pzw1 == pzw2) << endl;
    cout << "Czy nierowne?: " << (pzw1 != pzw2) << endl;

    //========================== TEST KLASY MAPA ===============================

    Mapa map1;

    //map1.dodaj(ksz1);

    //pomocniczo:
    Ksztalt ksz2;
    ksz2.dodaj(pnz2);
    ksz2.dodaj(pnz1);

    map1.dodaj(ksz2);
    //map1.dodaj(ksz1);

   // map1.usun();

    map1.wyswietl();
*/
    testMapa();
    return 0;
}

void testMapa() {

    PunktNaZiemi pierwszy(new Kat(1, 52, 12, 8), new Kat(1, 50, 10, 12));
    PunktNaZiemi drugi(new Kat(1, 53, 10, 14), new Kat(1, 50, 12, 10));

    Ksztalt ksztalt;
    ksztalt.dodaj(pierwszy);
    ksztalt.dodaj(drugi);

    Ksztalt nowy;
    nowy.dodaj(drugi);
    nowy.dodaj(pierwszy);

    Mapa mapa;
    mapa.dodaj(ksztalt);
    mapa.dodaj(nowy);

    mapa.wyswietl();

}