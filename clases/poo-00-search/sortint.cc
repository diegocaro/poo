#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int comp=0;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void sort(vector<int> &a) {
	int N = a.size();
	for (int i = 1; i < N; ++i) {
		for (int j = i; j > 0; --j) {
			if ( a[j-1] > a[j] ) {
				comp++;
				swap(a[j-1], a[j]);
			}
			else break;
		}
	}
}

void readint(string filename, vector<int> &a) {
	ifstream f(filename);
	int t;

	while(!f.eof()) {
		f >> t;
		a.push_back(t);
	}
	f.close();

}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		cerr << "Indique el archivo de entrada\n";
		return -1;
	}
		
	vector<int> data;
	readint(argv[1], data);
	sort(data);
	cout << "comparaciones: " << comp << endl;
		
	return 0;
}
