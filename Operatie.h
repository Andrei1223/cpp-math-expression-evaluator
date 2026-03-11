#ifndef OPERATIE_H
#define OPERATIE_H

#include<iostream>
using namespace std;

// enumeratie care gestioneaza tipul operatiilor
enum tip_op {
    SUMA,DIFERENTA, PUTERE,
    INMULTIRE, IMPARTIRE,
    RADICAL, NO_OP
};

class Operatie{
private:
    double operator1, operator2, rezultat;
    bool stanga, dreapta; // parametri care descriu daca exista si operatorul
    tip_op operatie;
    int prioritate;

    void seteaza_OP(char operatie);
    bool verifica_operatie();

public:
    Operatie();
    Operatie(double operator1, char operatie, double operator2, bool stanga, bool dreapta, int prioritate);


    double get_operator1();
    double get_operator2();
    double get_rezultat();
    bool get_stanga();
    bool get_dreapta();
    tip_op get_operatie();
    int get_prioritate();

    void set_operator1(double operator1);
    void set_operator2(double operator2);
    void set_stanga(bool stanga);
    void set_dreapta(bool dreapta);
    void set_rezultat(double result);

    bool executa_operatie();
};


#endif