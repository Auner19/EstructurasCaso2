#include <iostream>
#include "listasimple.h"
#include "nodoFloats.h"
#include "nodoJugadores.h"
#include "selectionsort.h"

using namespace std;


int main() {

    float miArreglo[] = {2.5, 8.2, 14.2, 6.5, 10.7};
    
    floats miLista;

    miLista.selectionSort(&miArreglo[0], 5);
    miLista.imprimirLista(&miArreglo[0], 5);


    jugadores myList[] = {};
    jugadores list;
    
    list.insertarFinal(1, "Pablo");
    list.insertarFinal(2, "Andres");
    list.insertarFinal(3, "Sofia");
    list.insertarFinal(4, "Maria");

    list.insertarPosition(7, "Luis", 2);

    list.imprimirLista(&myList[0], 4);

    //cout << list.isEmpty() << endl;
   // cout << myList.getQuantity() << endl;

}
