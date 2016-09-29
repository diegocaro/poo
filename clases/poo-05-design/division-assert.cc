#include <iostream>
#include <cassert>
using namespace std;

double division(int a, int b) {
    // Precondicion: denominador debe ser distinto de cero
    assert(b != 0);
    
    return a/b;
}

int main () {
    int x = 50;
    int y = 0;
    double z = 0;
   
    z = division(x, y);
    cout << z << endl;
    
    return 0;
}