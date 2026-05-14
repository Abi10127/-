//Una persona invierte en un banco una determinada cantidad de dinero y
//a una cierta tasa de inter ́es mensual. Construya un diagrama de ujo que
//permita obtener el monto de dinero que obtendr ́a al analizar el mes.


#include <stdio.h>
int main()
{
  float i, g, p, T;

  printf("Ingrese la cantidad deseada por invertir: ");
  scanf("%f", &i);
  printf("Ingrese la tasa de interés mensual deseada: ");
  scanf("%f", &p);

  g = (i*p)/100;
  T = g + i;

  printf("La ganancia total obtenida al final del mes es de: %f\n", T);
  return 0;
}
