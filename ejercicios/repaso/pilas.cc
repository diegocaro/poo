#include<iostream>
#include<stack>

using namespace std;

stack<int> unir(stack<int> a, stack<int> b) {
    stack<int> c;

    while( a.empty() == false ) {
        c.push(a.top());
        a.pop();
    }

    while( c.empty() == false) {
        b.push(c.top());
        c.pop();
    } 
    return b;
}


void print(stack<int> p) {
    while(!p.empty()) {
        cout << p.top() << '\n';
        p.pop();
    }
}

int main() {
    stack<int> a;
    stack<int> b;
    a.push(1); a.push(2); a.push(3);
    b.push(4); b.push(5); b.push(6);
    print(a);
    print(b);
    stack<int> c = unir(a,b);
    print(c);


}
