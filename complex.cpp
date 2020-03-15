#include "complex.h"
#include <iostream>
#include <string>

using namespace std;

Complex::Complex(double real, double imag) {

}

Complex Complex::add(Complex (*)(double, double)) const {
    return Complex(0, 0);
}

Complex Complex::mult(Complex (*)(double, double)) const {
    return Complex(0, 0);
}

Complex Complex::quot(Complex (*)(double, double)) const {
    return Complex(0, 0);
}

double Complex::abs(Complex (*)(double, double)) const {
    return 0;
}

std::string Complex::compute_polar(Complex (*)(double, double)) const {
    return nullptr;
}


