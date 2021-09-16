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

   // cout << miLista.getSize() << endl;

  //  miLista.imprimirLista(&miArreglo[0]);
    
   /* jugadores list;

    jugadores myList;
    myList.insertarFinal(1, "Pablo");
    myList.insertarFinal(2, "Andres");
    myList.insertarFinal(3, "Sofia");
    myList.insertarFinal(4, "Maria");
    //myList.imprimirLista(&list[0], 4);


    //cout << list.isEmpty() << endl;
   // cout << myList.getQuantity() << endl;
*/
}
