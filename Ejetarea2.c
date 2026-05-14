//Construir un diagrama de flujo tal que dado el radio de un círculo, calcule
//e imprima el  ́area y la circunferencia. El  ́area del círculo se calcula como
//Área = π ∗ radio2 y la circunferencia se calcula como Circunferencia =
//2 ∗ π ∗ radio.

#include <stdio.h>
int main()
{
  float pi, a, c, r;
  pi = 3.14;
  
  printf("Ingrese el valor del radio de la circunferencia: ");
  scanf("%f", &r);
  
  a = pi*r*r;
  c = 2*pi*r;

  printf("El valor del área es: %f\n", a);
  printf("El valor de la circunferencia es: %f\n", c);
  return 0;
}
  
