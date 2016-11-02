#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool match(string p) {
    stack<char> s;
    
    for(int i = 0; i < p.size(); ++i) {
        if (p[i] == '(') { 
            s.push('(');
        }
        else if (p[i] != '(') {
            // precondicion, debe existir
            // algun elemento en pila
            if (s.empty()) return false;
            
            // precondicion, el tope de la pila
            // debe ser un parentesis que abre (
            if (s.top() != '(') {
                return false;
            }
            
            s.pop();
        }
    }
    return s.size() == 0;
}

int main() {
    cout << match("()") << '\n';
    cout << match("())") << '\n';
    cout << match(")(()))") << '\n';
    cout << match("()()()()()()") << '\n';
    cout << match("())())") << '\n';
    
    return 0;
}