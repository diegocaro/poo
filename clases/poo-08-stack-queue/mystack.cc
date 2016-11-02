#include<iostream>
#include<vector>
#include<string>

using namespace std;

class StackString {
    vector<string> vs_;

public:
    StackString() { }
    void push(string s) { vs_.push_back(s); }
    void pop() { vs_.erase(vs_.end() - 1);}
    string top() { return vs_[vs_.size()-1];}
    bool empty() { return (vs_.size() == 0); }
};

int main() {
    StackString pila;
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
}