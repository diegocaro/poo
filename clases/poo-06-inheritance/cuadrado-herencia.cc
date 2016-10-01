#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
    double x1_, y1_; //punto inferior-izquierdo
    double x2_, y2_; //punto superior-derecho
    
public:
    Rectangle(double x1, double y1, \
                double x2, double y2) {
        x1_ = x1; y1_ = y1;
        x2_ = x2; y2_ = y2;
        cout << "Constructor clase Rectangle\n";
    }
    double area() { return height() * width(); }
    double height() { return abs(y2_ - y1_); }
    double width() { return abs(x2_ - x1_); }
};


class Cuadrado: public Rectangle {
public:
    Cuadrado(double x, double y, double side) : 
        Rectangle(x, y, x+side, y+side) 
    {
        cout << "Constructor clase Cuadrado\n";
    };
};


int main() {
    Rectangle r(-1, -1, 1, 1);
    std::cout << "Area de r: " << r.area() << "\n";
    
    Cuadrado c(-1, -1, 2);
    std::cout << "Area de c: " << c.area() << "\n";
    
    return 0;
}
