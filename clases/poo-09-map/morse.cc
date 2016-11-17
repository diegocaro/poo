#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

class Morse {
	map<string, char> c_;
	
public:
	Morse() {
		c_[".-"] = 'a';
		c_["-..."] = 'b';
		c_["-.-."] = 'c';
	}
	
	char decode(string dots) {
		if (c_.count(dots) > 0 ) {
			return c_[dots];
		}
		return '\n';
	}
};


int main() {
	Morse mor;
	vector<string> v = {"-...", ".-", "-...", ".-", "..."};
	
	for(auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << '\n';
		cout << mor.decode(*it) << '\n';
	}

	return 0;
}

