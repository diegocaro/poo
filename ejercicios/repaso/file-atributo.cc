#include<fstream>
#include<iostream>

using namespace std;

class Texto {
    ifstream &f;
    
    public:
    Texto(ifstream &fp) : f(fp) { }
    void leer() {
        string s;
        f >> s;
        cout << s << '\n';
    }
};

int main() {
    ifstream f("file.cc");
    Texto t(f);
    t.leer();   
    return 0;
}
