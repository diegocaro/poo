#include <iostream>
#include <string>

#include <cassert>

using namespace std;

class Vector {
    int *items;
    int n; //number of items
    int space; // number of items that can be stored
        
public:
    Vector() {
        space = 1;
        items = new int[space];
        items[0] = 0;
        n = 0;
    }
    
    ~Vector() {
        //delete [] items;
    }
    
    Vector(int size) {
        assert(size > 0);
        
        space = size;
        items = new int[space];
        n = space;
        
        for(int i = 0; i < n; ++i) {
            items[i] = 0;
        }
    }
    
    int get(int i) {
        // preconditions
        assert( i >= 0  && i < n);
    
        return items[i];
    }
    
    void set(int i, int v) {
        // preconditions
        assert( i >= 0  && i < n);
        items[i] = v;
    }
};


int main(int argc, char *argv[]) {
    Vector arreglo(10);
    
    arreglo.set(0, -1); 
    cout << "arreglo.get(0) = "  << arreglo.get(0) << endl;
    arreglo.set(1, 2); 
    cout << "arreglo.get(1) = "  << arreglo.get(1) << endl;

    int N = 10000000;
    for(int i = 0; i < N; ++i) {
        cout << "i: " << i << "\n";
        Vector arr(N);
        for(int j = 0; j < N; ++j) {
            arr.set(j, j*j);
        }
    }
    
    
    return 0;
}