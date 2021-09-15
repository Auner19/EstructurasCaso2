#include <iostream>
#include "listasimple.h"
#include "nodoFloats.h"
#include "nodoJugadores.h"
#include "selectionsort.h"
#include "insertionsort.h"

using namespace std;


int main() {

    float miArreglo[] = {2.5, 8.2, 14.0, 6.5, 10.7};
    
    floats miLista;
   /* miLista.agregar(10.1);
    miLista.agregar(8.2); 
    miLista.agregar(5.3); 
    miLista.agregar(16.4); 
    miLista.agregar(12.3); */

    miLista.selectionSort(&miArreglo[0], 5);
    miLista.imprimirLista(&miArreglo[0], 5);

   // cout << miLista.getSize() << endl;

  //  miLista.imprimirLista(&miArreglo[0]);


    jugadores myList;
    myList.insertarFinal(1, "Pablo");
    myList.insertarFinal(2, "Andres");
    myList.insertarFinal(3, "Sofia");
    myList.insertarFinal(4, "Maria");

    //cout << list.isEmpty() << endl;
   // cout << myList.getQuantity() << endl;

}
