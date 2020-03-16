#include "complex.h"
#include <iostream>
#include <string>

using namespace std;


Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

Complex::~Complex() = default;

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
    std::cout << real << " + " << imag << "i" << std::endl;
}

void Complex::show_exp() {

}

Complex Complex::add(Complex other) const {
    Complex addComplex;
    addComplex.real = real + other.real;
    addComplex.imag = imag + other.imag;
    return addComplex;
}

Complex Complex::mult(Complex other) const {
    Complex multComplex;
    multComplex.real = real * other.real - imag * other.imag;
    multComplex.imag = real * other.imag - other.real * imag;
    return multComplex;
}

Complex Complex::quot(Complex other) const {
    Complex quotComplex;
    quotComplex.real = (real*other.real + imag*other.imag) / (other.real*other.real + other.imag*other.imag);
    quotComplex.imag = (imag*other.real + real*other.imag) / (other.real*other.real + other.imag*other.imag);
    return quotComplex;
}

double Complex::abs(Complex other) const {
    return 0;
}

std::string Complex::compute_polar(Complex other) const {
    return nullptr;
}






