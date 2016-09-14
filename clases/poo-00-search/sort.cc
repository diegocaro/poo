#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(string &a, string &b) {
	string temp = a;
	a = b;
	b = temp;
}

void sort(vector<string> &a) {
	int N = a.size();
	for (int i = 1; i < N; ++i) {
		for (int j = i; j > 0; --j) {
			cout << "i: " << i << " j: " << j << endl;
			if ( a[j-1] > a[j] ) {
				cout << "swap\n";
				swap(a[j-1], a[j]);
			}
			else break;
		}
	}
}

void print(vector<string> &a) {
	for(int i=0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}
int main() {
	vector<string> data = {"la","el", "uno","los","las","una","tu", "yo"};
	print(data);
	sort(data);
	print(data);
	return 0;
}
