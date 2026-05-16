//Construya un programa tal que dado como entrada un arreglo unidimen-
//sional de enteros y un número entero, determine cuántas veces se encuentra
//el número dentro del arreglo.

#include <stdio.h>

int main() 
{
    int n, i, buscar, contador = 0;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int datos[n];
    for(i = 0; i < n; i++) 
    {
        printf("Dato %d: ", i);
        scanf("%d", &datos[i]);
    }

    printf("Ingrese el número que desea encontrar: ");
    scanf("%d", &buscar);

    for(i = 0; i < n; i++) 
    {
        if(datos[i] == buscar) 
        {
            contador++;
        }
    }
    printf("El numero %d aparece %d veces.\n", buscar, contador);
    return 0;
}
