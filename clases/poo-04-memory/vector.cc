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

    Vector(int size) {
        assert(size > 0);
        
        space = size;
        items = new int[space];
        n = space;
        
        for(int i = 0; i < n; ++i) {
            items[i] = 0;
        }
    }
    
    ~Vector() {
        delete [] items;
    }
    
    int size() {
        return n;
    }
    
    int capacity() {
        return space;
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

    void push_back(int v) {
        if (n == 0) {
            resize(8);
        }
        else if (n == space) {
            resize(2 * space);
        }
        
        items[n] = v;
        ++n;
    }
    
    void resize(int m) {
        if (m <= space) return;
        
        int *temp = new int[m];
        
        for(int i = 0; i < n; ++i ) {
            temp[i] = items[i];
        }

        delete [] items;
        
        space = m;
        items = temp;
    }
    
    string str() {
        string res;
        for(int i = 0; i < n; ++i) {
            res += to_string(items[i]) + " ";
        }
        return res;
    }

};


int main(int argc, char *argv[]) {
    Vector arreglo(10);
    
    arreglo.set(0, -1); cout << "capacity "  << arreglo.capacity() << endl;
    arreglo.set(1, 2); cout << "capacity "  << arreglo.capacity() << endl;
    arreglo.push_back(42); cout << "capacity "  << arreglo.capacity() << endl;
    arreglo.push_back(66); cout << "capacity "  << arreglo.capacity() << endl;
    
    cout << arreglo.str() << "\n";
    
    return 0;
}