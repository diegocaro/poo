#include<stack>
#include<iostream>
#include<string>
using namespace std;

class Alumno {
    string nombre;
    int promedio;
    public:
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

void print(stack<Alumno *> p) {
    while(!p.empty()) {
        Alumno *c = p.top();
        p.pop();

        cout << "Nombre: " << c->n() << '\n';
        cout << "Promedio: " << c->p() << '\n';
    }
}


int main() {
    stack<Alumno *> p;

    Alumno a("Diego", 7);
    Alumno b("Matias", 1);
    Alumno c("Pamela", 0);

    p.push(&a);
    p.push(&b);
    p.push(&c);

    print(p);


    return 0;


}

