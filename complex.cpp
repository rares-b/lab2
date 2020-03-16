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

}

void Complex::show_exp() {

}

Complex Complex::add(Complex other) const {
    return Complex(0, 0);
}

Complex Complex::mult(Complex other) const {
    return Complex(0, 0);
}

Complex Complex::quot(Complex other) const {
    return Complex(0, 0);
}

double Complex::abs(Complex other) const {
    return 0;
}

std::string Complex::compute_polar(Complex other) const {
    return nullptr;
}







