//Hacer un diagrama de flujo que calcule e imprima el producto de los N
//primeros números naturales.

#include <stdio.h>

int main() 
{
    int n, i;
    double producto = 1;
    printf("Ingrese el valor de n: ");
    scanf("%i", &n);

    for(i = 1; i <= n; i++) 
    {
        producto = producto * i;
    }
    printf("El producto de los primeros %i numeros es: %f\n", n, producto);
    return 0;
}
