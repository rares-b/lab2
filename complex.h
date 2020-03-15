#include <string>
#pragma once

class Complex {

private:
    double real{}, imag{};

public:
    //constructor
    Complex(double real, double imag);

    //show _compl

    //show_exp

    //returns the addition of two complex numbers
    Complex add(Complex(double r, double i)) const;

    //returns the multiplication of two complex numbers
    Complex mult(Complex(double r, double i)) const;

    //returns the division of two complex numbers
    Complex quot(Complex(double r, double i)) const;

    //returns the absolute value of a complex number
    double abs(Complex(double r, double i)) const;

    //returns the polar form of a complex number
    std::string compute_polar(Complex(double r, double i)) const;


};