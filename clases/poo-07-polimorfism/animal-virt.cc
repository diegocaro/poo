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

void listen(Animal &a) {
    cout << a.talk() << '\n';
}

int main() {
    Animal a; listen(a);
    Dog d;    listen(d);
    Cat c;    listen(c);
    return 0;
}