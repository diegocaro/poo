#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Circle {
    double x, y;
    double radio;

public:
    Circle (double px, double py, double r) {
        x = px; y = py;
        radio = r;
    }
    double dist() {
        return sqrt(x*x + y*y);
    }
    string str() {
        return "Circle at (" + to_string(x) + ", " + \
               to_string(y) + ") " \
               "with radio " + to_string(radio) + ".";
    }
};

int main () {
    Circle cA(5, 5, 5);
    Circle cB(0, 8, 1);
    cout << cA.str() << "\n";
    cout << "cA dist to origen: " << cA.dist() << "\n";
    cout << "cB dist to origen: " << cB.dist() << "\n";
    return 0;
}

