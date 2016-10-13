// Solucion usando vectores

#include<vector>
#include<cassert>
#include<string>
#include<iostream>

using namespace std;

class Pasajero {
    string nombres_;
    string apellidos_;
    string pasaporte_;
    int edad_;
    bool genero_; //true femenino, false masculino

public:
    Pasajero(string nombres, string apellidos, string pasaporte, int edad, bool genero) {
        // Precondicion edad positiva
        assert( edad >= 0 );
        
        // Precondiciones nombres y apellidos son no vacios
        assert( nombres.size() > 0 && apellidos.size() > 0);
        
        // Precondiciones pasaporte no vacio
        assert( pasaporte.size() > 0);
        
        nombres_ = nombres; apellidos_ = apellidos;
        pasaporte_ = pasaporte;
        edad_ = edad; 
        genero_ = genero;
    }
    
    string nombre() { return nombres_ + " " + apellidos_; }
    
    string pasaporte() { return pasaporte_; }
    
    void set_nombres(string nombres) {
        // Precondiciones
        assert(nombres.size() > 0);
        
        nombres_ = nombres;
    }
    
    void set_pasaporte(string pasaporte) {
        // Precondiciones
        assert(pasaporte.size() > 0);
        
        pasaporte_ = pasaporte;
    }
    
};

class Tripulacion {
    string nombres_;
    string apellidos_;
    string pasaporte_;
    int edad_;
    bool genero_;
    int experiencia_;
    int sueldo_;
    bool tipo_; // true piloto, false asistente

public:
    Tripulacion(string nombres, string apellidos, string pasaporte, int edad, bool genero, int experiencia, int sueldo, bool tipo) {
        // Precondicion edad positiva
        assert( edad >= 0 );
        
        // Precondiciones nombres y apellidos son no vacios
        assert( nombres.size() > 0 && apellidos.size() > 0);
        
        // Precondiciones pasaporte no vacio
        assert( pasaporte.size() > 0);
        
        // Precondicion experiencia y sueldo no negativos
        assert( experiencia >= 0 && sueldo >= 0);
        
        nombres_ = nombres; apellidos_ = apellidos;
        pasaporte_ = pasaporte;
        edad_ = edad; 
        genero_ = genero;
        
        experiencia_ = experiencia;
        sueldo_ = sueldo;
        tipo_ = tipo;
    }
    
    string nombre() { return nombres_ + " " + apellidos_; }
    
    bool tipo() { return tipo_; }
    
    void set_nombres(string nombres) {
        // Precondiciones
        assert(nombres.size() > 0);
        
        nombres_ = nombres;
    }
    
    void set_tipo(bool tipo) { tipo_ = tipo; }
    
};


class Avion {
    string nombre_;
    string modelo_;
    string id_;
    
    vector<Tripulacion> ta_; // vector asistentes
    vector<Tripulacion> tp_; // vector pilotos
    vector<Pasajero> vp_; //vector pasajeros
    
public:
    Avion(string nombre, string modelo, string id) {
        // Precondiciones
        assert(nombre.size() > 0);
        assert(modelo.size() > 0);
        assert(id.size() > 0);
        
        nombre_ = nombre;
        modelo_ = modelo;
        id_ = id;
    }
    
    string nombre() { return nombre_; }
    string id() { return id_; }

    void set_nombre(string nombre) {
        assert(nombre.size() > 0);
        nombre_ = nombre;
    }
    void set_id(string id) {
        assert(id.size() > 0);
        id_ = id;
    }
    
    int registrarTripoulacion(Tripulacion p) {
        // si es piloto
        if (p.tipo()) {
            //precondicion, numero de pilotos es maximo 4
            assert( tp_.size() < 4 );
            tp_.push_back(p);
            return tp_.size();
        } 
        else {
            //precondicion, numero de asistentes es maximo 6
            assert( ta_.size() < 6 );
            ta_.push_back(p);
            return ta_.size();
            
        }
    }
    
    int registrarPasajero(Pasajero p) {
        // precondicion, numero maximo de pasajeros
        assert( vp_.size() < 500);
        
        vp_.push_back(p);
        return vp_.size();
    }
    
    int checkIn(string pasaporte) {
        for(int i = 0; i < vp_.size(); ++i) {
            if (vp_[i].pasaporte() == pasaporte) {
                return i+1;
            }
        }
        return -1;
    }
    
};


int main() {
    Avion a("AirForce One", "Airbus 320", "AIFO1");
    
    Pasajero p1("Diego", "Caro", "11111111-1", 30, false);
    Pasajero p2("Joe", "Miso", "222222222-1", 20, true);
    cout << a.registrarPasajero(p1) << '\n';
    cout << a.registrarPasajero(p2) << '\n';
    
    cout << a.checkIn(p1.pasaporte()) << '\n';
    cout << a.checkIn("1123123") << '\n';
    
    return 0;
}