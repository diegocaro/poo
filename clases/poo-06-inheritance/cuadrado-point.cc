#include <iostream>
#include <cmath>
using namespace std;
class Point {
    double x_, y_;
    
public:
    Point() { x_ = y_ = 0; }
    Point(double x, double y) {
        x_ = x; y_ = y;
    }
    double distX(Point p) { return abs(p.x_ - x_); }
    double distY(Point p) { return abs(p.y_ - y_); }
    Point move(double dx, double dy) {
        return Point(x_+dx, y_+dy);
    }
};

class Cuadrado {
    Point p_; //inferior-izquierda
    double side_;
    
public:
    Cuadrado(Point p, double side) {
        p_ = p; 
        side_ = side;
    }
    
    double area() { return side_ * side_; }
};

int main() {
    Point p1(-1, -1);
    
    Cuadrado c(p1, 2);
    cout << "Area de c: " << c.area() << "\n";
    
    return 0;
}