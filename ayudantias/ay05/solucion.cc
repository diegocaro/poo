#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

class Plan {
    string nombre_;
    int precio_;
    int minutos_;
    int mbits_;
    int sms_;
public:
    Plan(int precio, int min, int mb, int sms) {
        nombre_ = "Plan";
        precio_ = precio;
        minutos_ = min;
        mbits_ = mb;
        sms_ = sms;
    }
    virtual void info() {
        cout << nombre_ << ": " << precio_ << '\n';
    }    
    string nombre() { return nombre_; }
    int precio() { return precio_; }
    void setNombre(string n) {
        nombre_ = n;
    }
};


class PlanVoz: public Plan {
    int minter_; //minutos internacionales
    
public:
    PlanVoz(int precio, int min, int mb, int sms, int minter) :
        Plan(precio, min, mb, sms) {
            minter_ = minter;
            //nombre_ = "Plan de voz";
            setNombre("Plan de voz");
        }
        
    void info() {
        cout << nombre() << ": " << precio() << '\n';
        cout << "Aproveche sus minutos internacionales gratis!!!\n";
    }  
};

class PlanMultimedia: public Plan {
    int mbadic_; // adicionales
public:
    PlanMultimedia(int precio, int min, int mb, int sms, int mbadic)
        : Plan(precio, min, mb, sms) {
            mbadic_ = mbadic;
            setNombre("Plan Multimedia");
        }
    void info() {
        cout << nombre() << ": " << precio() << '\n';
        cout << "Aproveche sus redes sociales gratis!!!\n";
    }    
};

class Sistema {
    vector<Plan *> planes_;
public:
    Sistema(int n) {
        planes_.reserve(n);
    }
    
    void consultarPlanes() {
        for(int i = 0; i < planes_.size(); ++i) {
            planes_[i]->info();
        }
    }
    void agregarPlan(Plan *p) {
        planes_.push_back(p);
    }
    void eliminarPlan(int i) {
        planes_.erase(planes_.begin()+i);
    }
};


void print(vector<Plan *> &vp) {
    for(int i=0; i < vp.size(); ++i) {
        vp[i]->info();
    }
}

bool pornombre(Plan *a, Plan *b) {
    return a->nombre() < b->nombre();
}

int main() {
    Sistema s(3);
    
    Plan a(10000, 100, 100, 100);
    s.agregarPlan(&a);
    
    PlanVoz b(10000, 100, 100, 100, 99999);
    s.agregarPlan(&b);
    
    PlanMultimedia c(10000, 100, 100, 100, 9999999);
    s.agregarPlan(&c);
    
    s.consultarPlanes();
    
    s.eliminarPlan(0);
    
    s.consultarPlanes();
    
    return 0;
}