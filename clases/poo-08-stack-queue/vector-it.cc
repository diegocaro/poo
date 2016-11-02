#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;       
    for(int i=0;i<10;i++){
        vec.push_back(i); 
    }
    for(int i=0; i<vec.size(); i++){  
        cout << vec.at(i); //imprime 0123456789
    }
    cout << '\n';
    
    //elimina el elemento la 4ta posicion
    vec.erase(vec.begin()+4);
    
    for(vector<int>::iterator it = vec.begin(); \
                                it != vec.end(); ++it ){
        cout << *it; //imprime 012356789
    }
    cout << '\n';

    //elimina elementos entre el 1ero y el 5to
    vec.erase(vec.begin()+1,vec.begin()+5);  
    for(auto it = vec.begin(); it != vec.end(); ++it ){
        cout << *it;  //imprime 06789
    }
    cout << '\n';
    return 0;
}