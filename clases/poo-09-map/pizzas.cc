#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<cassert>
using namespace std;

class Pizza {
    vector<string> i_; //ingredientes

    protected:
    int p_; //precio

    public:
    Pizza() {};
    void agregar(string i) {
        assert( i_.size() < 6 );
        i_.push_back(i);
    }

    int getPrecio() {
        return p_;
    }
};

class PizzaInd: public Pizza {
    public:
        PizzaInd() {
            p_ = 3000;
        }
};

class PizzaMed: public Pizza {
    public:
        PizzaMed() {
            p_ = 5000;
        }
};

class PizzaGra: public Pizza {
    public:
        PizzaGra() {
            p_ = 9000;
        }
};

class Cliente {
    string n_;
    public:
    Cliente() {}
    Cliente(string n) {n_ = n;}
    string nombre() { return n_;}
};

class Pedido {
    Cliente c_;
    vector<Pizza *> p_;
    public:
    Pedido(Cliente c) {
        c_ = c;
    } 
    void agregarPizza(Pizza *p) {
        p_.push_back(p);
    }

    int precio() {
        int total = 0;
        for(int i = 0; i < p_.size(); ++i) {
                total += p_[i]->getPrecio();
        }
        return total;
    }
    
    int precio2() {
        int total = 0;
        for(auto it = p_.begin(); it != p_.end(); ++it) {
            total += (*it)->getPrecio(); 
        }
        return total;
    }

    string nombre() {
        return c_.nombre();
    }
};


class Sistema {
    queue<Pedido*> c_;

    public:
    int vender(Pedido *p) {
        c_.push(p);
        return c_.size();
    }

    Pedido* entregar() {
        Pedido *p = c_.front();
        c_.pop();
        return p;
    }
};

int main() {
    Cliente c("Goku");

    PizzaGra g;
    g.agregar("queso");
    g.agregar("pollo");

    PizzaInd i;
    i.agregar("pepperoni");
    i.agregar("tomate");
    
    Pedido p(c);
    p.agregarPizza(&g);
    p.agregarPizza(&i);

    Sistema s;
    cout << "Lugar en fila: " << s.vender(&p) << '\n';

    Pedido *pf;
    pf = s.entregar();
    cout << "Esta listo el pedido de: " << pf->nombre() << '\n';
    cout << "Y debe pagar: " << pf->precio() << '\n'; 
    


    return 0;
}