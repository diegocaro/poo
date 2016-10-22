#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual string talk() { return ""; }
};

class Dog: public Animal {
public:
    string talk() { return "Woof!"; }
};

class Cat: public Animal {
public:
    string talk() { return "Miau!"; }
};

int main() {
    Animal *a; 
    Dog d; 
    a = &d;
    cout << a->talk() << '\n';
    
    Cat c;
    a = &c; 
    cout << a->talk() << '\n';
    return 0;
}