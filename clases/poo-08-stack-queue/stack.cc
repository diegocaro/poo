#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> s;
    s.push("white");
    s.push("white");
    s.push("white");
    s.push("gray");
    s.push("black");
    cout << s.top() << '\n';
    s.pop();
    cout << s.top() << '\n';
    s.pop();
    cout << s.top() << '\n';
    return 0;
}