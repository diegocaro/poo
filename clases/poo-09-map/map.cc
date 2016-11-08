#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
    map<string, string> IPaddress;
    IPaddress["udp.cl"] = "172.20.85.12";
    IPaddress["eit.udp.cl"] = "200.14.84.221";
    IPaddress["www.google.com"] = "216.58.222.142";
    IPaddress["www.pokemongo.com"] = "72.21.81.131";
    
    cout << "IP de eit.udp.cl: "
         << IPaddress["eit.udp.cl"] << '\n';
    return 0;
}