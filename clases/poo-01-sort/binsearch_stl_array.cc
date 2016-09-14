#include <iostream>
#include <algorithm> // for binary_search(...)

using namespace std;

int main() {
    const int size = 8;
	int arreglo[size] = {-1,1,3,4,9,12,23,90};
	int clave = 23;
	cout << binary_search(&arreglo[0], &arreglo[size-1], clave) << "\n";
	return 0;
}
