#include <iostream>
#include <vector>
#include "sistema.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Sistema sis(5);
    Bus a("Semi-Cama", 45, "Santiago", "Rancagua", 10000, 10);
    Bus b("Salon-Cama", 30, "Santiago", "Valparaiso", 8000, 10);
    Bus c("Premium    ", 20, "Santiago", "Rancagua", 10000, 10);
    sis.agendarBus(a);
    sis.agendarBus(b);
    sis.agendarBus(c);
    sis.listarAgenda();
    sis.listarBus(1);
    sis.listarBus(2);
    sis.venderPasaje(1, 4, "17921354-0");
    sis.listarBus(1);
    return 0;
}
