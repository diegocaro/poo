#include <iostream>
#include <cmath>
using namespace std;

class Function {
public:
    virtual double evaluate(double x) { return 0.0; }
};

class Square: public Function {
public:
    double evaluate(double x) {
        return x * x;
    }
};

class GaussianPDF: public Function {
public:
    double evaluate(double x) {
        return exp(-x * x/2) / sqrt( 2 * 3.141569);
    }
};

class RectangleRule {
public:
    double integrate( Function &f, double a, double b, int N) {
        double delta = (b - a) / N;
        double sum = 0.0;
        for(int i = 0; i < N; ++i) {
            sum += delta * f.evaluate(a + delta * (i + 0.5));
        }
        return sum;
    }
};

int main() {
    double a = 0, b = 100;
    int N = 1000;
    
    RectangleRule rect;
    Square s;
    cout << "Integral de x * x = " << rect.integrate(s, a, b, N) << "\n";

    GaussianPDF g;
    cout << "Integral de GaussPDF = " << rect.integrate(g, a, b, N) << "\n";
    return 0;
}