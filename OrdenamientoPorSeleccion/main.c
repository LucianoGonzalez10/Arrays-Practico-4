#include <stdio.h>
#include <stdlib.h>


int cargarArreglo (float arreglo[], int dimension);

int main()
{
    int i = 0, dimension = 0, dado = 0, valido = 0;
    printf("Ingrese la cantidad de elementos a cargar \n");
    scanf("%i", &dimension);
    float arreglo[dimension];
    i = cargarArreglo(arreglo, dimension);

    printf("Que numero quiere buscar en el Array? \n");
    scanf("%i", &dado);

    for(int r=0; r<dimension; r++)
    {
        printf("-%.1f- \n", arreglo[r]);
    }

    valido = buscarOrdenado(arreglo, dimension, dado);
    if(valido = 1){
        printf("El elemento se encuentra en el array. \n");
    }
    else{
        printf("El elemento no se encuentra. \n");
    }

    return 0;
}

int cargarArreglo (float arreglo[], int dimension)
{
    int i = 0;
    while(dimension>i)
    {
        printf("Ingresa el valor a cargar");
        scanf("%f", &arreglo[i]);
        i++;
    }
    return i;
}

int buscarOrdenado(float arreglo [], int dimension, int dado, int valido)
{
    int i;
    for(i=0; i<dimension; i++)
    {
        if(arreglo[i] == dado)
        {
            valido = 1;
            i = dimension;
        }
        else
        {
            i++;
        }
    }
    return valido;
}
