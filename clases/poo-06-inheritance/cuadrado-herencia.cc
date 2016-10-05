#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
    double x1_, y1_; //punto inferior-izquierdo
    double x2_, y2_; //punto superior-derecho
    
public:
    Rectangle() {
        x1_ = y1_ = -10; x2_ = y2_ = 10;
        cout << "Constructor por defecto de Rectangle\n";
    }
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
    Cuadrado(double x, double y, double side)  
      :  Rectangle(x, y, x+side, y+side) 
    {
        cout << "Constructor clase Cuadrado\n";
    }
};

class TriRect: public Cuadrado {
    public:
        TriRect(double x, double y, double side)
        : Cuadrado(x, y, side) {

        cout << "Constructor Triangle\n";
        }

};

int main() {
    Rectangle r(-1, -1, 1, 1);
    std::cout << "Area de r: " << r.area() << "\n";
    
    Cuadrado c(-1, -1, 2);
    std::cout << "Area de c: " << c.area() << "\n";
    
    cout << "Ancho cuadrado: " << c.width() << "\n";

    TriRect t(-1, -1, 2);
    double ar = t.area();
    cout << "Area triangulo rectangulo: " << ar/2 << "\n";


    return 0;
}
