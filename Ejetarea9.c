//Haga un diagrama de flujo para obtener la tabla de multiplicar de un
//número entero N, comenzando desde el 1.

#include <stdio.h>

int main() 
{
    int n, i;
    printf("Ingrese el número deseado: ");
    scanf("%i", &n);

    for(i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
