#include <string>
#include <iostream>
#pragma once

class Complex {

private:
    double real{}, imag{};

public:
    //constructors
    Complex(double real, double imag);
    Complex();

    //destructor
    ~Complex();

    double getReal() const;
    double getImag() const;

    void setReal(double real);
    void setImag(double real);

    //show _compl
    void show_compl();

    //show_exp
    void show_exp();

    //returns the addition of two complex numbers
    Complex add(Complex other) const;

    //returns the multiplication of two complex numbers
    Complex mult(Complex other) const;

    //returns the division of two complex numbers
    Complex quot(Complex other) const;

    //returns the absolute value of a complex number
    double abs(Complex other) const;

    //returns the polar form of a complex number
    std::string compute_polar(Complex other) const;


};