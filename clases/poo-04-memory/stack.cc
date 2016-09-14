#include <iostream>

using namespace std;

int main() {
    int a[4096000];
    int N = 4096000;
    for(int i = 0; i < N; ++i) {
        a[i] = i+i;
    }

    cout << "a[" << N-1 << "] = " << a[N-1] << "\n";
    return 0;    
}