#include<iostream>
using namespace std;

void f(int *p) {
    *p = -1111111;
}

int main() {
    int a[4] = {5, 7, 42, 31};
    
    f(&a[2]);
    // imprime -1111111
    cout << a[2] << '\n';
    
    return 0;
}
