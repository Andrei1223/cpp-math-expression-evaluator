#include "MyVector.h"

// constructori
MyVector::MyVector()
{
    // se aloca vectorul
    vect = new int[0];
    dim_vect = 0;
}

MyVector::~MyVector()
{
    delete[] vect;
}

bool MyVector::empty()
{
    if (dim_vect == 0)
        return true;
    return false;
}

// functie care returneaza ultimul element din vector
int MyVector::top()
{
    if (dim_vect != 0) {
        cout << "Problema top()"<<endl;
        return 0;
    }
    return vect[dim_vect - 1];
}

bool MyVector::push_back(int num)
{
    // se realoca memorie
    dim_vect++;
    vect = (int *)realloc(vect, dim_vect);

    vect[dim_vect - 1] = num;

    return true;
}


int MyVector::erase()
{
    
}