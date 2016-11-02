#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Person {
    string name_;
    int age_;
public:
    Person(string n, int a) {
        name_ = n;
        age_ = a;
    }
    int age() { return age_; }
    string name() { return name_; }
};

bool by_name(Person a, Person b) {
    return a.name() < b.name();
}

bool by_age(Person a, Person b) {
    return a.age() < b.age();
}

void print(vector<Person> &vp) {
    for(int i = 0; i < vp.size(); ++i) {
        cout << "  - " << vp[i].name() << ": " << vp[i].age() << '\n';
    }
}

int main() {
    Person a("Valentina", 22);
    Person b("Diego", 19);
    Person c("Andrea", 21);
    Person d("Jorge", 24);
    
    vector<Person> vp;
    vp.push_back(a); //vp[0] es una copia de a
    vp.push_back(b);
    vp.push_back(c);
    vp.push_back(d);
    
    cout << "Original: \n"; print(vp);

    sort(vp.begin(), vp.end(), by_name);
    cout << "\nPor nombre: \n"; print(vp);
    
    sort(vp.begin(), vp.end(), by_age);
    cout << "\nPor edad: \n"; print(vp);
    
    return 0;
    
}