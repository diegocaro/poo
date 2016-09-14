#include <iostream>
#include <vector>

using namespace std;

int binsearch(vector<int> &data, int key) {
	int pos = -1;
	int inf = 0;
	int sup = data.size()-1;
	while (inf <= sup) {
		cout << "inf: " << inf << " sup: " << sup << endl;
		int mit = inf + (sup-inf)/2;
		cout << "mit: " << mit << endl;
		if (data[mit] < key) {
			inf = mit + 1;
		}
		else if (data[mit] > key) {
			sup = mit - 1;
		}
		else {
			pos = mit;
			break;
		}
	}
	return pos;
}

int binsearchr(vector<int> &data, int key, int inf, int sup) {
	cout << "inf: " << inf << " sup: " << sup << endl;
	if ( inf > sup) 
	    return -1;	
	int mit = inf + (sup-inf)/2;
	cout << "mit: " << mit << endl;
	
	if (data[mit] < key) 
		return binsearchr(data, key, mit+1, sup);
	if (data[mit] > key)
		return binsearchr(data, key, inf, mit-1);
	else
		return mit;

}

int main() {
	vector<int> arreglo = {-1,1,3,4,9,12,23,90};
	int clave = 23;
	cout << binsearch(arreglo, clave) << "\n";
	cout << binsearchr(arreglo, clave, 0, arreglo.size()-1) << "\n";
	return 0;
}
