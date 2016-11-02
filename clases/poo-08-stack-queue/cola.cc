#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main() {
    queue<string> cola;
    cola.push("Do. Or do not.");
    cola.push("There is no try.");
    cola.push("  - Yoda");
    
    while(!cola.empty()) {
        string s = cola.front();
        cout << s << '\n';
        cola.pop();
    }
    
    return 0;
}