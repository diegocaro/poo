#include <iostream>
#include <vector>
#include <cassert>
#include "timing.h"

using namespace std;

void wait() {
    cout << "Presiona una tecla para continuar...\n";
    int ch = std::cin.get();
}

long sum_copy(vector<int> vcopy) {
    long res = 0;
    for(int i = 0; i < vcopy.size(); ++i) {
        res += vcopy[i];
    }
    
    return res;
}

long sum_ref(vector<int> &vref) {
    long res = 0;
    for(int i = 0; i < vref.size(); ++i) {
        res += vref[i];
    }
    return res;
}

int main() {
    int N = 536870912; // 2^29 elementos, tamaño: 2 GiB
    vector<int> reallybigvector(N);
    for(int i=0; i < N; ++i) {
        reallybigvector[i] = i;
    }
    
    cout << "Verifica la memoria usada por este programa!\n"; 
    wait();
    
    Stopwatch tcopy;
    long tot1 = sum_copy(reallybigvector);
    cout << "sum_copy uso: " << tcopy.elapsedTime() << "ms\n";
    
    
    cout << "Verifica la memoria usada por este programa!\n"; 
    wait();
    
    Stopwatch tref;
    long tot2 = sum_ref(reallybigvector);
    cout << "sum_ref uso: " << tref.elapsedTime() << "ms\n";
    
    // post condition
    assert(tot1 == tot2);
    
    return 0;
}