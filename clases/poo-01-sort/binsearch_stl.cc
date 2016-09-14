#include <iostream>
#include <vector>
#include <algorithm> // for binary_search(...)

using namespace std;

int main() {
	vector<int> arreglo = {-1,1,3,4,9,12,23,90};
	int clave = 99;
	cout << binary_search(arreglo.begin(), arreglo.end(), clave) << "\n";
	return 0;
}
