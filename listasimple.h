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

    void imprimirLista(jugadores* puntero, int size) {
        for (int indice = 0; indice < size; indice++) {
            cout << *(puntero + indice) << endl;
        } 
        cout << endl;
    }

    bool eliminar(int pNumero){
        nodoJugadores* puntero = (nodoJugadores*)malloc(sizeof(struct jugadores));
        for (int indice = 0; indice < size; indice++) {
            if(pNumero == puntero->numero){
                //delete puntero;
                puntero = puntero->next;
                return true;
            } else{
                indice++;
                *(puntero + indice);
            }
        }
        return false;
    } 

   int insertarPosition(int pValue, string pNombre, int pPosition) {
        nodoJugadores* newvalue = (nodoJugadores*)malloc(sizeof(struct jugadores));
        newvalue->numero = pValue;
        newvalue->nombre = pNombre;
        int resultado = 0;

        if (size==0) {
            inicio = newvalue;
            final = newvalue;  
        } else if (pPosition==0) {
            newvalue->next = inicio;
            inicio = newvalue;
        } else {
            int actualPosition = 1;
            nodoJugadores* pointerToPosition = nullptr;
            nodoJugadores* pointerBehind = nullptr;

            if (pPosition>=size) {
                pointerBehind = final;
                final = newvalue;
                actualPosition = size;
            } else {
                pointerToPosition = inicio->next;
                pointerBehind = inicio;
            }

            while (actualPosition<pPosition && pointerToPosition!=nullptr) {
                pointerBehind = pointerToPosition;
                pointerToPosition = pointerToPosition->next;
                actualPosition++;
            }

            pointerBehind->next = newvalue;
            newvalue->next = pointerToPosition;
            resultado = actualPosition;
        }

        size++;
        return resultado;
    } 

    void InsertionSort(jugadores *punteroJugadores){

    }

};

#endif
