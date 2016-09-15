#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// return true if vector a is sorted
// return false otherwise
bool is_sorted(vector<int> &a) {
    for(int i=1; i < a.size(); ++i) {
        if (a[i-1] > a[i]) return false;
    }
    return true;
}

// print an integer vector
void print(vector<int> &a) {
    for(auto it=a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}

// merge two sorted vectors
void merge(vector<int> &a, vector<int> &b, vector<int> &c) {
    // preconditions
    assert( is_sorted(a) && is_sorted(b) );
    
    int szA = a.size();
    int szB = b.size();
    int N = szA + szB;
    c.resize(N);
    
    int i = 0; //index for vector a
    int j = 0; //index for vector b
    for (int k = 0; k < N; ++k) {
        if ( i == szA) {
            c[k] = b[j];
            j++;
        }
        else if ( j == szB) {
            c[k] = a[i];
            ++i;
        }
        else if (a[i] < b[j]) {
            c[k] = a[i];
            ++i;
        }
        else {
            c[k] = b[j];
            ++j;
        }
        
    } 
    // postconditions
    assert( c.size() == a.size() + b.size() );
    assert( is_sorted(c) );
}

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 8};
    vector<int> c;
    
    merge(a, b, c);
    print(c);
    
    return 0;
}
