//Construir un diagrama de flujo para almacenar en un arreglo unidimen-
//sional los 100 primeros números pares. Imprimir al final el arreglo.

#include <stdio.h>
int main() 
{
    int pares[100];
    int i, numeroActual = 2;

    for(i = 0; i < 100; i++) 
    {
        pares[i] = numeroActual;
        numeroActual += 2;
    }
        printf("Los primeros 100 numeros pares son:\n");
        for(i = 0; i < 100; i++) 
    {
        printf("%d ", pares[i]);
        if((i + 1) % 10 == 0) printf("\n");
    }
    return 0;
}
