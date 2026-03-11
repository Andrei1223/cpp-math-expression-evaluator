#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <cstring>


using namespace std;

class MyVector {
private: 
    int *vect;
    int dim_vect;

public:
    MyVector(); //constructor implicit
    ~MyVector(); //destructor

    bool empty();

    int top();
    bool push_back(int num);
    int erase();
};

#endif

