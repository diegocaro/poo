#include <iostream>
#include <string>
using namespace std;
class Counter {
public:
    int count_;
    string name_;
    
    Counter(string id) {
        name_ = id;
        count_ = 0;
    }
    
    string name() {
        return name_;
    }
    
    void increment() {
        ++count_;
    }
    
    int value() {
        return count_;
    }
};


int main() {
    Counter c("Providencia");
    c.count_ = -5020; //warning!!! Anyone can update the counter!!!
    
    cout << c.name() << " tiene " << c.value() << " votos.\n";
    return 0;
}