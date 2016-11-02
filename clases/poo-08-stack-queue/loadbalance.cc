#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {
    vector< queue<int> > servers(4);
    
    queue<int> request;
    for(int i = 0; i < 9999; ++i) {
        request.push(i);
    }
    
    while( ! request.empty()) {
        queue<int> *min = &servers[0];
        for(int i = 1; i < servers.size(); ++i) {
            if (servers[i].size() < min->size()) {
                min = &servers[i];
            }
        }
        min->push( request.front() );
        request.pop();
    }
    
    for(int i = 0; i < servers.size(); ++i) {
        cout << "server " << i << ": " << servers[i].size() << " requests.\n";
    }
    
    return 0;
}