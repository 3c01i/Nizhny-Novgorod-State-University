#pragma once
#include "Complex.h"
#include <cmath>

#define PI 3,14159265

Complex::Complex(double ValueRe, double ValueIm) {
    Re=ValueRe;
    Im=ValueIm;
}
Complex::Complex() {
    Re = 0;
    Im = 0;
}
Complex::Complex(const Complex &other) {
    this->Im=other.Im;
    this->Re=other.Re;

}


void Complex::Print() {
    std::cout<<"Re= "<<Re<<" Im= "<<Im<<"*i"<<endl<<endl;
}

double Complex::GetIm() {
    return(Im);
}

void Complex::SetIm(double Im) {
    this->Im=Im;
}

double Complex::GetRe() {
    return(Re);
}

void Complex::SetRe(double Re) {
    this->Re=Re;
}

Complex Complex::operator+(Complex STerm) {
    Complex Total;
    Total.Im = Im + STerm.Im;
    Total.Re = Re + STerm.Re;
    return(Total);
}

Complex Complex::operator=(Complex Second) {
    if (*this == Second)
        return *this;
    Im = Second.Im;
    Re = Second.Re;
    return(*this);
}

bool operator!=(Complex &First,Complex &Second) {
    return(!(First == Second));
}

ostream& operator<< (ostream& os, Complex Input) {
    return os <<Input.GetIm() << " " << Input.GetRe();
}

istream& operator>>(istream &in, Complex& Output){
    double a,b;
    in >>a >> b;
    Output.SetRe(a);
    Output.SetIm(b);
    return in;
}

bool operator== (Complex &First,Complex &Second) {
    return(First.GetRe() == Second.GetRe() && First.GetIm() == Second.GetIm());
}

double Complex::ModComplex() {
    double mod;
    mod = pow((pow(Im,2)+pow(Re,2)),0.5);
    return(mod);
}

Complex Complex::ExpComplex(double n) {
    Complex result;
    result.SetRe(pow((this->ModComplex()),n)*cos(n*this->injection()));
    result.SetIm(pow((this->ModComplex()),n)*sin(n*this->injection()));
    return result;
}

double Complex::injection() {
    double result;
    result=(atan2(Im,Re));
    return(result);
}

void Complex::PrintComplex() {
    std::cout<<this->ModComplex()<<"*("<<"cos("<<this->injection()<<")+sin("<<this->injection()<<"))"<<endl;
}