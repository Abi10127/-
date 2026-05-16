//Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
//dimensional de enteros, obtenga como resultado la suma de los mismos.

#include <stdio.h>
int main() 
{
    int n, i, suma = 0;
    printf("Ingrese el número de elementos del arreglo: ");
    scanf("%d", &n);

    int arreglo[n]; 

    for(i = 0; i < n; i++) 
    {
        printf("Elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i]; 
    }
    printf("La suma total es: %d\n", suma);
    return 0;
}
