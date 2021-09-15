#ifndef _LISTASIMPLE_
#define _LISTASIMPLE_

#include <iostream>
#include "nodoJugadores.h"

using namespace std;

    struct jugadores {
        int size = 0;
        nodoJugadores* inicio = nullptr;
        nodoJugadores* final = nullptr;

    bool isEmpty() {
        if(size == 0){
            return true;
    }
    else
        return false;
    }

    int getQuantity() {
        return size;
    }

    bool insertarFinal(int pNumero, string pNombre) {
        nodoJugadores* newvalor = (nodoJugadores*)malloc(sizeof(struct jugadores));
        newvalor->numero = pNumero;
        newvalor->nombre = pNombre;
        
        if (size == 0) {
            inicio = newvalor;
            final = newvalor; 
        } else {
            // agregar al final de la lista
            final->next = newvalor;             
            final = newvalor;      
        }
        size++;
        return true;
    }

    /*bool eliminar(int pNumero){

 } 


    void insertarJugador(int pNumero, string pNombre, int pPosition){

 }
*/

};

#endif
