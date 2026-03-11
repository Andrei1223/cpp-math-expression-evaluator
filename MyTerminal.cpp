#include "MyTerminal.h"

#include<iostream>
using namespace std;

MyTerminal::MyTerminal(){
    status = true;
}

void MyTerminal::schimba_status(bool status){
    this->status = status;
}

void MyTerminal::afiseaza_rezultat(double numar, bool valid){
    
    if (valid){
        cout << numar << endl;
    }
    else {
        cout << "eroare" << endl;
    }
}

bool MyTerminal::get_status(){
    return status;
}

char *MyTerminal::citeste(){
    cin.getline(mesaj, sizeof(mesaj));

    if (strcmp(mesaj, "exit") == 0){
        status = false;
    }
    return mesaj;
}

char *MyTerminal::get_mesaj(){
    return mesaj;
}