#include <complex>
#include <iostream>
using namespace std;

int main(){

    complex<float> c(1, 2);
    cout << "c=" << c.real() << '+' << c.imag() << 'i' << endl;
    c.real(3);
    c.imag(3);
    c += 1;
    cout << "new c=" << c.real() << '+' << c.imag() << 'i' << endl;
    cout << "norm (" << c << ") = " << norm(c) << endl;
    cout << "abs  (" << c << ") = " << abs(c)  << endl;
    return 0;
}
