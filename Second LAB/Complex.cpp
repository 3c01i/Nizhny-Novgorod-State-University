#pragma once
#include "Complex.h"

Complex::Complex(double ValueIm, double ValueRe) {
    Im=ValueIm;
    Re=ValueRe;

}
Complex::Complex() {
    Im = 0;
    Re = 0;
}
Complex::Complex(const Complex &other) {
    this->Im=other.Im;
    this->Re=other.Re;

}


void Complex::Print() {
    std::cout<<"Im= "<<Im<<" Re= "<<Re<<endl<<endl;
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

Complex Complex::operator+ (Complex STerm) {
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

bool Complex::operator== (Complex &Second) {
    return(Im == Second.Im && Re == Second.Re);
}

bool Complex::operator!=(Complex &Second) {
    return(!(*this == Second));
}

ostream& Complex::operator<< ( Complex Input) {
    return (cout<<Input.GetIm() << " " << Input.GetRe());
}
