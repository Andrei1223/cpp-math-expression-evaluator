#include "Operatie.h"
#include <iostream>

using namespace std;

// constructor
Operatie::Operatie()
{
    operator1 = 0;
    operator2 = 0;
    rezultat = 0;
    stanga = false;
    dreapta = false;
    operatie = NO_OP;
    prioritate = 0;
}

Operatie::Operatie(double operator1, char operatie, double operator2, bool stanga, bool dreapta, int prioritate)
{
    this->prioritate = prioritate;
    this->operator1 = operator1;
    this->operator2 = operator2;
    rezultat = 0;
    this->stanga = stanga;
    this->dreapta = dreapta;
    // se seteaza operatia in functie de caracter. se presupune ca operatia este valida
    seteaza_OP(operatie);
}

// functie care seteaza operatia in functie de caracterul primit
void Operatie::seteaza_OP(char operatie)
{
    switch (operatie) {
        case '+':
            this->operatie = SUMA;
            break;
        case '-':
            this->operatie = DIFERENTA;
            break;
        case '*':
            this->operatie = INMULTIRE;
            break;
        case '/':
            this->operatie = IMPARTIRE;
            break;
        case '#':
            this->operatie = RADICAL;
            break;
        case '^':
            this->operatie = PUTERE;
            break;
        default:
            // daca nu este o operatie valida
            this->operatie = NO_OP;
            cout << "nu este o operatie valida: " << operatie << "\n"; 
            break;
    }
}

// verifica daca operatia este valida dpdv matematic
bool Operatie::verifica_operatie()
{
    // daca nu exista operatia
    if (operatie == NO_OP)
        return false;

    // daca se face impartire la 0
    if (operatie == IMPARTIRE && operator2 == 0)
        return false;
    
    // daca se face radical de ordin par dintr o valoare negativa
    if (operatie == RADICAL && operator1 < 0 && (int)operator2 % 2 == 0)
        return false;

    return true;
}

// functie care executa operatia
bool Operatie::executa_operatie()
{
    if (verifica_operatie() == false)
        return false;
    
    // se executra comanda
    switch (operatie) {
    case SUMA:
        rezultat = operator1 + operator2;
        break;
    case DIFERENTA:
        rezultat = operator1 - operator2;
        break;
    case PUTERE:
        rezultat = pow(operator1, operator2);
        break;
    case RADICAL:
        rezultat = pow(operator1, 1.0 / operator2);
        break;
    case INMULTIRE:
        rezultat = operator1 * operator2;
        break;
    case IMPARTIRE:
        rezultat = operator1 / operator2;
        break;
    case NO_OP:
        break;
    }

    return true;
}

// setter
void Operatie::set_operator1(double operator1)
{
    this->operator1 = operator1;
}
void Operatie::set_operator2(double operator2)
{
    this->operator2 = operator2;
}
void Operatie::set_stanga(bool stanga)
{
    this->stanga = stanga;
}
void Operatie::set_dreapta(bool dreapta)
{
    this->dreapta = dreapta;
}

void Operatie::set_rezultat(double result)
{
    this->rezultat += rezultat;
}

// getteri
int Operatie::get_prioritate()
{
    return prioritate;
}
double Operatie::get_operator1()
{
    return operator1;
}

double Operatie::get_operator2()
{
    return operator2;
}

double Operatie::get_rezultat()
{
    return rezultat;
}

bool Operatie::get_stanga()
{
    return stanga;
}

bool Operatie::get_dreapta()
{
    return dreapta;
}

tip_op Operatie::get_operatie()
{
    return operatie;
}