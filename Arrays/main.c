#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargarArreglo (int arreglo[], int dimension);
Pila apilarArreglo (int arreglo [], int dimension, Pila ejercicio4);
int main()
{

    /* int i =0, dimension=0;
    Pila ejercicio4;
    inicpila(&ejercicio4);
    printf("Ingrese la cantidad de elementos a cargar");
    scanf("%d", &dimension);
    int arreglo[dimension];
    i=cargarArreglo(arreglo, dimension);
    printf("%i \n", i);
        for(int r=0; r<dimension; r++){
        printf("-%i- \n", arreglo[r]);
    }
    int suma = sumaArreglo(arreglo, dimension);
    printf("%i", suma);
    ejercicio4 = apilarArreglo(arreglo, dimension, ejercicio4);
    mostrar(&ejercicio4); */
    return 0;
}
/*
int cargarArreglo (int arreglo[], int dimension)
{
    int i = 0;
    while(dimension>i)
    {
        printf("Ingresa el valor a cargar");
        scanf("%i", &arreglo[i]);
        i++;
    }
    return i;
}

int sumaArreglo (int arreglo[], int dimension)
{
     int suma = 0, r;
     for(r=0; r<dimension; r++)
    {
        suma = suma + arreglo[r];
    }
    return suma;
}
Pila apilarArreglo (int arreglo [], int dimension, Pila ejercicio4){
    inicpila(&ejercicio4);
    int j;
    for(j=0; j<dimension; j++){
        apilar(&ejercicio4, arreglo[j]);
    }
    return ejercicio4;
} */

float cargarArreglo (int arreglo[], int dimension)
{
    int i = 0;
    while(dimension>i)
    {
        printf("Ingresa el valor a cargar");
        scanf("%i", &arreglo[i]);
        if(&arreglo[i]> 999.99){
            printf("Elemento no Valido");
            i--;
        }
        i++;
    }
    return i;
}
