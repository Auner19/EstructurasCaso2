#ifndef _SELECTIONSORT_
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

    void agregar(float pValue) {
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
    void imprimirLista(float* puntero, int size) {
        for (int indice = 0; indice < size; indice++) {
            cout << *(puntero + indice) << endl;
        } 
        cout << endl;
    }


    void selectionSort(float* pValoresAOrdenar, int size){
        float* puntero2 = pValoresAOrdenar + 1;
        int indice = 0;
        while( indice < size-1 ){ 
            if(*pValoresAOrdenar > *puntero2){
                intercambio( pValoresAOrdenar, puntero2);
                *(pValoresAOrdenar)++;
                //*(puntero2)= *(puntero2)+indice;
                indice ++;
            }
            else
             *(pValoresAOrdenar)++;
             *(puntero2)++;
             //indice ++;
        }
    }


 /*   void selectionSort(float* pValoresAOrdenar, int size) {
        for (int indice = 0; indice < size - 1; indice++) {
            float* puntero = pValoresAOrdenar;
            for (*puntero = indice + 1; *puntero < size; *puntero++) {
                if (*puntero > *pValoresAOrdenar)
                *pValoresAOrdenar = *puntero;
            }
         intercambio(pValoresAOrdenar, puntero);
        }     
    }
    */
};

#endif

