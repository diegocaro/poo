// Alerta, este codigo compila, pero no hace lo que debe
#include <iostream>
#include <vector>
using namespace std;

class Figura {
public:
    virtual double area(){ return 0; }
};

class Rectangulo: public Figura {
    int x1_, x2_, y1_, y2_;
public:
    Rectangulo(int x1, int y1, int x2, int y2) { 
        x1_ = x1; x2_ = x2; y1_ = y1; y2_ = y2;
    }
    double area() {
        return (y2_ - y1_) * (x2_ - x1_);
    }  
};

class Cuadrado: public Rectangulo {
public:
    Cuadrado(int x, int y, int lado)
        : Rectangulo(x, y, x+lado, y+lado) { 
    
    }

    // metodo area es heredado de Rectangulo
};

class Circulo: public Figura {
    int x_, y_, r_;
public:
    Circulo(int x, int y, int radio) {
        x_ = x; y_ = y; r_ = radio;
    }
    double area() {
        return 3.1416 * r_ * r_;
    }
};

double area_total(vector<Figura> & vf) {
    // Alerta, este codigo compila, pero no hace lo que debe
    double area = 0;
    for(int i = 0; i < vf.size(); ++i) {
        area += vf[i].area();
    }
    return area;
}

int main() {
    // Alerta, este codigo compila, pero no hace lo que debe
    vector<Figura> vf(3);
    
    Rectangulo r(-1, -1, 1, 1);
    Cuadrado c(1, 1, 5);
    Circulo l(1, 1, 3);
    
    vf[0] = r;
    vf[1] = c;
    vf[2] = l;
    
    cout << area_total(vf) << '\n';
    
}

