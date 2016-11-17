#include <vector>
#include <iostream>
using namespace std;
class Asiento {
    bool ocupado_;
    int x, y;
    
    public:
    Asiento() {
        ocupado_ = true;
        cout << "por defecto\n";
    }

    bool libre() {
        return ! ocupado_;
    }
};

int main() {
    Asiento a[10];
//    vector<Asiento> b(10);
    cout << "esta libre asiento 0: " << a[0].libre() << "\n";
    return 0;
}
