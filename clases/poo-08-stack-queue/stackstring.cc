#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    stack<string> pila;
    while(!cin.eof()) {
        string s;
        cin >> s;
        pila.push(s);
    }
    
    while(!pila.empty()) {
        string s = pila.top();
        cout << s << '\n';
        pila.pop();
    }
    
    
    return 0;
}