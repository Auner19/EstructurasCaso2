#ifndef _NODOJUGADORES_
#define _NODOJUGADORES_ 1

#include <iostream>
using namespace std;

struct nodoJugadores {
    int numero;
    string nombre;
    nodoJugadores* next = nullptr;
};

#endif