#include "Kat.h"

using namespace std;

int main() {

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

    return 0;
}