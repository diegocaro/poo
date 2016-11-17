#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

bool comp(stack<int> &a, stack<int> &b) {
    return (a.size() < b.size());
}

void print(vector<stack<int> > vs) {
    for(auto it = vs.begin(); it != vs.end(); ++it) {
        cout << it->size() << '\n';
    }
}


int main() {
    vector< stack<int> > vs;
    
    stack<int> a; a.push(1); a.push(2);
    vs.push_back(a);

    stack<int> b; b.push(4); b.push(5); b.push(6); 
    vs.push_back(b);

    stack<int> c;
    vs.push_back(c);

    print(vs);

    sort(vs.begin(), vs.end());

    print(vs);

    return 0;
}

