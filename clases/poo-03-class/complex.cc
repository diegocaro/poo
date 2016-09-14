#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Complex {
    double re, im;
    
public:
    Complex (double real, double imag) {
        re = real;
        im = imag;
    }
    string str() {
        return to_string(re) + " + " + to_string(im) + "i";
    }
    double abs() {
        return sqrt(re*re + im*im);
    }
    Complex plus(Complex b) {
        double real = re + b.re;
        double imag = im + b.im;
        return Complex(real, imag);
    }
    Complex times(Complex b) {
        double real = re * b.re - im * b.im;
        double imag = re * b.im + im * b.re;
        return Complex(real, imag);
    }
};

int main () {
    Complex a( 3.0, 4.0);
    Complex b( -2.0, 3.0);
    Complex c = a.times(b);
    
    cout << a.str() << "\n";
    cout << b.str() << "\n";
    cout << c.str() << "\n";
    return 0;
}
