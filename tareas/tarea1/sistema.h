#ifndef SISTEMA_H_
#define SISTEMA_H_ 

class Bus {
protected:
    std::vector<std::string> asientos_;
    std::string tipo_;
    std::string origen_;
    std::string destino_;
    int precio_;
    int hora_;
public:
    Bus(std::string tipo, size_t asientos, std::string origen, std::string destino, int precio, int hora) {
        for (int i = 0; i < asientos; i++)
        {
            asientos_.push_back("");
        }
        tipo_ = tipo;
        origen_ = origen;
        destino_ = destino;
        precio_ = precio;
        hora_ = hora;
    }

    void listarAsientos() {
        std::cout << "Asientos disponibles: ";
        for (int i = 0; i < asientos_.size(); i++)
        {  
            if(asientos_[i].size() == 0) 
            {
                std::cout << i+1 << " ";
            }
        }
        std::cout << std::endl;

        std::cout << "Asientos vendidos: ";
        for (int i = 0; i < asientos_.size(); i++)
        {
            if(asientos_[i].size() != 0)
            {
                std::cout << i+1 << ": " << asientos_[i] << std::endl;
            }
        }
        std::cout << std::endl;
    }

    bool venderAsiento(int asiento, std::string rut) {
        if(asientos_[asiento-1].size() == 0) {
            asientos_[asiento-1] = rut;
            return true;
        }
        return false;
    }

    void info() {
        std::cout << origen_ << "\t" << destino_ << "\t" << tipo_ << "\t" << hora_;
    }
};

class Sistema {
protected:
    std::vector<Bus> buses_;
public:
    Sistema(int buses) {
        buses_.reserve(buses);
    }
    
    void agendarBus(Bus bus) {
        buses_.push_back(bus);
    }
    
    void listarAgenda() {
        std::cout << "Selector\tOrigen\t\tDestino\t\tTipo\t\tHora" << std::endl;
        for (int i = 0; i < buses_.size(); i++)
        {
            std::cout << i+1 << "\t\t";
            buses_[i].info();
            std::cout << std::endl;
        }
    }
    
    void listarBus(int bus) {
        buses_[bus-1].listarAsientos();
    }
    
    bool venderPasaje(int bus, int asiento, std::string rut) {
        if (buses_[bus-1].venderAsiento(asiento, rut) == false) {
            std::cerr << "El asiento ya está vendido.\n";
            return false;
        }
        return true;
    }
};

#endif
