//Escribir un diagrama de flujo tal que dado como entrada un arreglo unidi-
//mensional de enteros, determinar cuántos de ellos son positivos, negativos o nulos.

#include <stdio.h>
int main() 
{
    int n, i, p = 0, ne = 0, nu = 0;
    printf("Cantidad de numeros: ");
    scanf("%d", &n);

    int lista[n];
    for(i = 0; i < n; i++) 
    {
        printf("Ingresa numero %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    for(i = 0; i < n; i++) 
    {
        if(lista[i] > 0) p++;
        else if(lista[i] < 0) ne++;
        else nu++;
    }
    printf("Positivos: %d\n", p);
    printf("Negativos: %d\n", ne);
    printf("Nulos: %d\n", nu);
    return 0;
}
