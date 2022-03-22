#pragma once
#include <iostream>
using namespace std;

class Complex{
protected:

    double Im;
    double Re;

public:
    double GetIm();
    void SetIm(double Im);
    double GetRe();
    void SetRe(double Re);


    void Print();


    Complex();
    Complex(double ValueIm,double ValueRe);
    Complex(const Complex &other);

    //
    Complex operator+ (Complex STerm);
    Complex operator= (Complex Second);
    bool operator== (Complex &Second);
    bool operator!= (Complex &Second);
    ostream& operator<< (Complex Input);
};