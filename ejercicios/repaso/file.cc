#include<fstream>
#include<iostream>

using namespace std;

class Texto {
    public:
    void leer(string filename) {
        ifstream f(filename);
        
        string s;
        f >> s;
        cout << s << '\n';
        f.close();
    }
};

int main() {
    Texto t;
    t.leer("file.cc");   
    return 0;
}
