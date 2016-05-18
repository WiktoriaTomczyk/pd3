#include "Kat.h"
#include "PunktNaZiemi.h"
#include "Ksztalt.h"
#include "PunktZWysokoscia.h"
#include "Mapa.h"

void testKat();
void testPunktNaZiemi();
void testKsztalt();
void testPunktZWysokoscia();
void testMapa();
void testPunktWyswietl();

using namespace std;

int main() {

    testKat();
    testPunktNaZiemi();
    testKsztalt();
    testPunktZWysokoscia();
    testMapa();
    testPunktWyswietl();
    system("cls");

    return 0;
}

void testKat() {

    Kat kat1 = new Kat(1, 52, 12, 8);
    Kat kat2 = new Kat(-1, 10, 2, 6);

    cout << kat1.toString() << endl;

    cout << kat2.toString() << endl;

    cout << (kat1 + kat2).toString() << endl;
    cout << (kat1 - kat2).toString() << endl;

    cout << (kat1 > kat2) << endl;
    cout << (kat1 < kat2) << endl;
    cout << (kat1 == kat2) << endl;
    cout << (kat1 != kat2) << endl;
}

void testPunktNaZiemi() {

    Kat kat1 = new Kat(1, 52, 12, 8);
    Kat kat2 = new Kat(-1, 10, 2, 6);

    Kat * wsk1 = &kat1;
    Kat * wsk2 = &kat2;

    PunktNaZiemi pnz1 = PunktNaZiemi(wsk1, wsk2);
    PunktNaZiemi pnz2 = PunktNaZiemi(wsk2, wsk1);

    cout << wsk1->toString() << endl;
    cout << wsk2->toString() << endl;

    cout << "Czy rowne?: "<<(wsk1==wsk2) << endl;
    cout << "Czy nierowne?: "<<(wsk1!=wsk2) << endl;
}

void testKsztalt() {

    Kat kat1 = new Kat(1, 52, 12, 8);
    Kat kat2 = new Kat(-1, 10, 2, 6);

    Kat * wsk1 = &kat1;
    Kat * wsk2 = &kat2;

    PunktNaZiemi pnz1 = PunktNaZiemi(wsk1, wsk2);
    PunktNaZiemi pnz2 = PunktNaZiemi(wsk2, wsk1);

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

}

void testPunktZWysokoscia() {

    Kat kat1 = new Kat(1, 52, 12, 8);
    Kat kat2 = new Kat(-1, 10, 2, 6);

    PunktZWysokoscia pzw1 = PunktZWysokoscia(kat1, kat2, 212);
    PunktZWysokoscia pzw2 = PunktZWysokoscia(kat2, kat1);

    cout << pzw1.toString() << endl;
    cout << pzw2.toString() << endl;

    cout << "Czy rowne?: " << (pzw1 == pzw2) << endl;
    cout << "Czy nierowne?: " << (pzw1 != pzw2) << endl;

}

void testMapa() {

    PunktNaZiemi pierwszy(new Kat(1, 1, 1, 1), new Kat(1, 2, 2, 2));
    PunktNaZiemi drugi(new Kat(1, 3, 3, 3), new Kat(1, 4, 4, 4));

    Ksztalt ksztalt;
    ksztalt.dodaj(pierwszy);
    ksztalt.dodaj(drugi);

    Ksztalt nowy;
    nowy.dodaj(drugi);
    nowy.dodaj(pierwszy);
    nowy.usun();

    Mapa mapa;
    mapa.dodaj(ksztalt);
    mapa.dodaj(nowy);

    mapa.wyswietl();

}

void testPunktWyswietl(){

    PunktNaZiemi *pnz1 = new PunktZWysokoscia(new Kat(), new Kat(), 215);
    PunktNaZiemi *pnz2 = new PunktNaZiemi(new Kat(), new Kat());

    cout << pnz1->toString() << endl;
    cout << pnz2->toString() << endl;

}