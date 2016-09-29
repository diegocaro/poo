#include <iostream>
#include <cassert>
using namespace std;

double area(int length, int width) {
    // Precondicion: largo y ancho deben ser no negativos
    assert( length > 0 && width > 0);
    int a = length * width;
    
    // Postcondition: area debe ser no negativa
    assert (a > 0);
    return a;
}

int main () {
    double a = area(-1, 2);
    cout << a << endl;
    
    return 0;
}