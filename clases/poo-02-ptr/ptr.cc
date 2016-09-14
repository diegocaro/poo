#include<iostream>
using namespace std;

int main() {
	int c = 42;
    //puntero tipo int
	int *p; 
    //p apunta a dirección de c
    cout << "&c: " << &c << '\n';
    p = &c; 
    // imprime contenido de puntero p
	cout << *p << '\n';
    // actualizar contenido de puntero p
    *p = 33;
    
	cout << "p: " << p << '\n';
	cout << "*p: " << *p << '\n';
	return 0;
}
