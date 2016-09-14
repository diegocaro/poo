#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    
public:
    Rectangle (int x, int y) {
        width = x;
        height = y;
    }
    int area() {
        return width*height;
    }
};

int main () {
    Rectangle rA(3, 4);
    Rectangle rB(9, 8);
    cout << "area rA: " << rA.area() << "\n";
    cout << "area rB: " << rB.area() << "\n";
    return 0;
}

