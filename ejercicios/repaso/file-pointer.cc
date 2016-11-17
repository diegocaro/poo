#include<fstream>
#include<iostream>

using namespace std;

class Texto {
    public:
    void leer(ifstream &f) {
        string s;
        f >> s;
        cout << s << '\n';
        f.close();
    }
};

int main() {
    Texto t;
    ifstream f("file.cc");
    t.leer(f);   
    return 0;
}
