class Figura {
public:
    virtual double area() = 0;
};

class Rectangulo: class Figura {
public:
    Rectangulo(int x1, int y1, int x2, int y2) { ... }
    double area() {
        return (y2-y1) * (x2 - x1);
    }  
};

class Cuadrado: class Rectangulo {
public:
    Cuadrado(int x, int y, int lado)
        : Rectangulo(x, y, x+lado, y+lado) { ...}

    // metodo area es heredado de Rectangulo
};

class Circulo {
public:
    Cirtual(int x, int y, int radio)
    double area() {
        return 3.1416 * radio * radio;
    }
};

