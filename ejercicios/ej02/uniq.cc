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

// return true if a sorted vector 
// return false otherwise
bool is_uniq(vector<int> &a) {
    for(int i=1; i < a.size(); ++i) {
        if (a[i-1] == a[i]) return false;
    }
    return true;
}

// Unique modify the sorted array A so that
// its elements are unique.
// Parameters: A sorted array
// Return: the number of unique elements
int unique(vector<int> &A) {
    if (A.size() == 0) return 0;
    
    // preconditions
    assert( is_sorted(A) );
    
    int N = A.size();
    
    int j = 0;  // length of the unique array
    for(int i = 1; i < N; ++i) {
        if (A[i] != A[i-1]) {
            j += 1;
            A[j] = A[i];
        }
    }
    A.resize(j+1);
    
    // postconditions
    assert( is_sorted(A) );
    assert( is_uniq(A) );
    return j+1;
}

void print(vector<int> &A) {
    int N = A.size();
    for(int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> A = {1, 1, 1, 4, 5, 8, 10, 11, 20, 20, 20, 31, 31};
    
    cout << "Original: ";
    print(A);
    
    int M = unique(A);
    A.resize(M);
    
    cout << "Sin duplicados: ";
    print(A); 
    
    vector<int> B = {1}; // just an element
    print(B); unique(B); print(B);
    
    vector<int> C = {}; // an empty array
    print(C); unique(C); print(C);
    return 0;
}