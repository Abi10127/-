//Construya un diagrama de flujo que lea 100 n ́umeros naturales y cuente
//cuántos de ellos son positivos, negativos o nulos.

#include <stdio.h>

int main() 
{
    int num, i;
    int p = 0, ne = 0, nu = 0;

    for(i = 1; i <= 100; i++) 
    {
        printf("%d. Ingrese un numero: ", i);
        scanf("%d", &num);

        if(num > 0) p++;
        else if(num < 0) ne++;
        else nu++;
    }
    printf("Positivos: %d\n", p);
    printf("Negativos: %d\n", ne);
    printf("Nulos: %d\n", nu);
    return 0;
}
