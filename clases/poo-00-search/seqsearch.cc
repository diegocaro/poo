#include <iostream>
#include <vector>

using namespace std;
// búsqueda secuencial
// retorna un entero con la posición del elemento
// si elemento no es encontrado retorna -1
int seqsearch(int *data, int size , int key) {
	int pos = -1;
	for(int i = 0; i < size; ++i) {
		if (data[i] == key) {
			pos = i;
			break;
		}
	}
	return pos;
}


int main() {
	//vector<int> arreglo = {1,4,9,12,23,-1,3,90};
	int arreglo[8] = {1,4,9,12,23,-1,3,90};
        int clave = 23;
	cout << seqsearch(&arreglo[0], 8, clave) << "\n";
	return 0;
}
