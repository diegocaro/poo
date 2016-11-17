#include<map>
#include<iostream>
#include<string>
using namespace std;

class Alumno {
    string nombre;
    int promedio;
    public:
    Alumno() {}
    Alumno(string n, int p) {
        nombre = n;
        promedio = p;
    }
    string n() {
        return nombre;
    }
    int p() {
        return promedio;
    }
};

int main() {
    map<string, Alumno> p;

    Alumno a("Diego", 7);
    Alumno b("Matias", 1);
    Alumno c("Pamela", 0);


    p["POO"] = a;
    p["CAL"] = b;
    p["ALG"] = c;

    cout << "Valor de clave POO: " << p["POO"].n() << '\n';

    return 0;


}

