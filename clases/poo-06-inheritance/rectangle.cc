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
};

class Rectangle {
    Point p1_, p2_; //inferior-izquierda, superior-derecha
    
public:
    Rectangle(Point p1, Point p2) {
        p1_ = p1; p2_ = p2;
    }
    
    double area() {
        return p1_.distX(p2_) * p1_.distY(p2_);
    }
};

int main() {
    Point p1(-1, -1);
    Point p2(1, 1);
    
    Rectangle r(p1, p2);
    std::cout << "Area de r: " << r.area() << "\n";
    
    return 0;
}
