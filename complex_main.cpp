#include "complex.h"
#include <iostream>
#include <cassert>

using namespace std;

int main() {

    //ex5
    Complex v[5];
    Complex obj1(3,4);
    Complex obj2(5, 6);
    Complex obj3(8,9);
    Complex obj4(1,3);
    Complex obj5(2,6);
    v[0] = obj1;
    v[1] = obj2;
    v[2] = obj3;
    v[3] = obj4;
    v[4] = obj5;

    //ex7
    Complex suma;
    Complex suma1;
    suma = v[0].add(v[1]);
    suma1= suma.add(v[2]);
    suma = suma1.add(v[3]);
    suma1=suma.add(v[4]);
    //suma1.show_compl();

    return 0;
}