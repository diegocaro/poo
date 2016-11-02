#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
    stack<double> vals;
    stack<string> ops;
    
    while(true) {
        string s; cin >> s;
        if (cin.eof()) break;
        
        if      (s.compare("(") == 0) ;
        else if (s.compare("+") == 0) ops.push(s);
        else if (s.compare("*") == 0) ops.push(s);
        else if (s.compare(")") == 0) {
            string op = ops.top(); ops.pop();
            double a = vals.top(); vals.pop();
            double b = vals.top(); vals.pop();
            
            if      (op.compare("+") == 0) vals.push(a + b);
            else if (op.compare("*") == 0) vals.push(a * b);
        }
        else vals.push(stod(s));
    }
    cout << vals.top() << '\n';
    return 0;
}