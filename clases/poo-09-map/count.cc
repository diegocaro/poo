#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
    map<string, int> c;
    
    while(!cin.eof()) {
        string t;
        cin >> t;
        c[t] += 1;
    }
    
    for(auto it = c.begin(); it != c.end(); ++it) {
        cout << it->second << "\t" << it->first << '\n';
    }
    
    return 0;
}
