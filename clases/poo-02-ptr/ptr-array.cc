#include<iostream>
using namespace std;

int main() {
    int a[4] = {5, 7, 42, 31};
    int *p = &a[2];
    
    cout << *p << '\n';
    
    // a es lo mismo que &a[0]
    cout << "a: " << a << '\n';
    cout << "&a[0]: " << &a[0] << '\n';
    
    return 0;
}
