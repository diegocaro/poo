#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;


class Trans {
	int monto_;
	string fecha_;
	string local_;
public:
	Trans() {}
	Trans(int m, string f, string l) {
		monto_ = m; fecha_ = f; local_ = l;
	}
	string local() { return local_;}
	int monto() {
		return monto_;
	}
};

class Card {
	string numero_;
	int monto_;
	vector<Trans> trans_;
public:
	Card() {}
	Card(string num, int monto) {
		numero_ = num;
		monto_ = monto;
	}	
	void comprar(int m, string f, string l) {
		Trans t(m, f, l);
		trans_.push_back(t);
	}
	vector<Trans> historia() {
		return trans_;
	}
};


int main() {
	map<string, Card *> banco;
	
	Card c("1234", 1000);
	banco["1234"] = &c;
	c.comprar(10, "2016-11-10", "Donia Juanita");

	vector<Trans> t = banco["1234"]->historia();
	
	for(auto it = t.begin(); it != t.end(); ++it) {
		cout << it->local() << " " << it->monto() << '\n';
	}
	return 0;
	
}