#include <iostream>
#include "listasimple.h"
#include "nodoFloats.h"
#include "nodoJugadores.h"
#include "selectionsort.h"
#include "insertionsort.h"

using namespace std;


int main() {

    floats miLista;
    miLista.agregar(10.1);
    miLista.agregar(8.2); 
    miLista.agregar(5.3); 
    miLista.agregar(16.4); 
    miLista.agregar(12.3); 

    cout << miLista.getSize() << endl;

}
