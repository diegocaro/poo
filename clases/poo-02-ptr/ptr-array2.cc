#include<iostream>
using namespace std;

int main() {
    int a[4] = {5, 7, 42, 31};
    int *p = a;

    //entonces a[2] es lo mismo que p[2]
    cout << a[2] << '\n';
    cout << p[2] << '\n';

    return 0;
}
