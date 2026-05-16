//Construir un diagrama de ujo que pueda determinar, dados dos n ́umeros
//enteros, si un n ́umero es divisor del otro.

#include <stdio.h>
int main ()
{
  int a, b, T;
  printf("Ingresar el valor a: ");
  scanf("%i", &a);
  printf("Ingresar el valor b: ");
  scanf("%i", &b);

  if( a % b == 0 )
  {
    printf("El valor %d es divisible entre %d", a, b);
  }
  else
  {
    printf("El valor %d no es divisble entre %d", a, b);
  }
  return 0;
}
