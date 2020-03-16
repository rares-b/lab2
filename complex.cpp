#include "complex.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


Complex::Complex() {
    /* Default Constructor
     Atributele sunt initializate cu 0*/
    real = 0;
    imag = 0;
}

Complex::Complex(double real, double imag) {
    /* Alt constructor*/
    this->real = real;
    this->imag = imag;
}

Complex::~Complex() = default; // Destructor

double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}

void Complex::setReal(double newReal) {
    this->real = newReal;
}

void Complex::setImag(double newImag) {
    this->imag = newImag;
}

void Complex::show_compl() {
    //Functie care afiseaza un obiect de tip Complex
    cout << real <<"+"<< imag <<"i"<<endl;
}

void Complex::show_exp() {
    //Functie care afiseaza forma exponentiala a unui obiect de tip Complex
    double r;
    r = sqrt(real*real+imag*imag);
    cout<<r<<"*e^(i*arctg"<<imag<<"/"<<real<<")"<<endl;
}

Complex Complex::add(Complex other) const {
    //Functie care aduna doua obiecte de tip Complex
    // return addComplex - suma
    Complex addComplex;
    addComplex.real = real + other.real;
    addComplex.imag = imag + other.imag;
    return addComplex;
}

Complex Complex::mult(Complex other) const {
    //Functuie care calculeaza produsul a doua obiecte de tip Complex
    // return multComplex - produsul
    Complex multComplex;
    multComplex.real = real * other.real - imag * other.imag;
    multComplex.imag = real * other.imag - other.real * imag;
    return multComplex;
}

Complex Complex::quot(Complex other) const {
    //Functie care calculeaza catul a doua obiecte de tip Complex
    //return quotComplex - cat
    Complex quotComplex;
    quotComplex.real = (real*other.real + imag*other.imag) / (other.real*other.real + other.imag*other.imag);
    quotComplex.imag = (imag*other.real + real*other.imag) / (other.real*other.real + other.imag*other.imag);
    return quotComplex;
}

double Complex::abs() const {
    //Functie care returneaza valoarea absoluta a unui obiect de tip Complex
    // return - betrag - val absoluta
       //     - 0  daca atat real cat si imag sunt 0
    double betrag;
    if (imag !=0 || real != 0) {
        betrag = sqrt(real*real+imag*imag);
        return betrag;
    }
    else
        return 0;
}

std::string Complex::compute_polar() const {
    // Functie care returneaza forma polara a unui obiect de tip Complex
    double r = this->abs();
    string finalString;

    if (real == 0 && imag == 0)
        return "0";
    else if (real == 0 && imag > 0) {
        finalString = to_string(r);
        finalString = finalString + "(cos(pi/2) + i*sin(pi/2))";
        return finalString;
    }
    else if (real == 0 && imag < 0) {
        finalString = to_string(r);
        finalString = finalString + "(cos(3*pi/2) + i*sin(3*pi/2))";
        return finalString;
    }
    else if (real > 0 && imag >= 0) {
        finalString = to_string(r);
        double phi = atan(real/imag);
        string phiString = to_string(phi);
        finalString = finalString + "(cos(" + phiString + ") + i*sin(" + phiString + "))";
        return finalString;
    }
    else if (real < 0) {
        finalString = to_string(r);
        double phi = atan(real/imag);
        string phiString = to_string(phi) + " + pi";
        finalString = finalString + "(cos(" + phiString + ") + i*sin(" + phiString + "))";
        return finalString;
    }
    else if (real > 0 && imag < 0) {
        finalString = to_string(r);
        double phi = atan(real/imag);
        string phiString = to_string(phi) + " + 2*pi";
        finalString = finalString + "(cos(" + phiString + ") + i*sin(" + phiString + "))";
        return finalString;
    }
    return "0";
}
