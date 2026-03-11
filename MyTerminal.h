#ifndef MYTERMINAL_H
#define MYTERMINAL_H

#include <iostream>
using namespace std;

class MyTerminal {
private:
    bool status;
    char mesaj[50];

public:
    MyTerminal();
    void schimba_status(bool status);
    void afiseaza_rezultat(double numar, bool valid);
    bool get_status();
    char *get_mesaj();
    char *citeste();
};

#endif