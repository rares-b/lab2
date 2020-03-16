#include "complex.h"
#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

bool compare_abs(Complex c1, Complex c2) {
    return (c1.abs() < c2.abs());
}

void Test()
{
    Complex suma, produs, cat;
    double val_absoluta;
    Complex c1(3,4);
    Complex c2(4,6);
    suma = c1.add(c2);
    assert(suma.getReal() == 7);
    assert(suma.getImag() == 10);

    produs = c1.mult(c2);
    assert(produs.getReal() == -12);
    assert(produs.getImag() == 2);

    cat = c1.quot(c2);
    //assert(cat.getReal() == 0.692308);
   // assert(cat.getImag() ==0.653846);

    val_absoluta = c1.abs();
    assert(val_absoluta == 5);

}

int main() {

    //ex5 - creeaza un sir de obiecte de tip Complex
    Complex v[5];
    Complex obj1(3,4);
    Complex obj2(4, 6);
    Complex obj3(8,9);
    Complex obj4(1,3);
    Complex obj5(2,6);
    v[0] = obj1;
    v[1] = obj2;
    v[2] = obj3;
    v[3] = obj4;
    v[4] = obj5;

    //ex6 - sorteaza sirul dupa modul
    int n = sizeof(v)/sizeof(v[0]);  // lungimea sirului
    sort(v, v+n, compare_abs);  // sorteaza sirul dupa modul
    cout << "Vector sorted by absolute value: \n";
    for (int i=0; i<n; i++) {
        v[i].show_compl();
        cout << " with abs = " << v[i].abs() << endl;
    }

    //ex7 - calculeaza suma totala a sirului
    Complex suma = v[0];
    for (int i=1; i<n; i++) {
        suma = suma.add(v[i]);
    }
    suma.show_compl();

    Test();
    return 0;
}