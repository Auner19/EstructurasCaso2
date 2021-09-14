//#ifndef _SELECTIONSORT_
#define _SELECTIONSORT_

#include <iostream>
#include "nodoFloats.h"

using namespace std;

struct floats {

    int size = 0;
    nodoFloats* inicio = nullptr;
    nodoFloats* final = nullptr;

int getSize() {
        return size;
    }

void agregar(int pValue) {
        nodoFloats* newvalue = (nodoFloats*)malloc(sizeof(struct floats));
        newvalue->valor = pValue;
        
        if (size == 0) {
            inicio = newvalue;
            final = newvalue; 
        } else {
            // agregar al final de la lista
            final->next = newvalue;             
            final = newvalue;      
        }
        size++;
    }

 // función para intercambiar la posición de dos elementos
void intercambio(float *position1, float *position2) {
    float temp = *position1;
    *position1 = *position2;
    *position2 = temp;
    }

 // función para imprimir un array
void imprimirLista(float lista[], int size) {
    for (int indice = 0; indice < size; indice++) {
        cout << lista[indice] << " ";
        }
        cout << endl;
    }


/*void selectionSort( float *pValoresAOrdenar){
    if (size > 2) {
        inicio = *pValoresAOrdenar;

    }
*/

};

