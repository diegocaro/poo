#include <iostream>
#include <vector>
#include <algorithm> //incluir esta biblioteca

using namespace std;
void print(vector<float> &a) {
	int N = a.size();
	for(int i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main() {
	vector<float> v = {4.1, 2.3, 5.7, 10.1, -5.0, 6.6, 3.4, -44};
	print(v);
	sort(v.begin(), v.end());
	print(v);

	float clave = 4.1;
	if (binary_search(v.begin(), v.end(), clave)) {
		cout << "encontrado!\n";
	} else {
		cout << "no encontrado\n";
	}	

	return 0;
}
