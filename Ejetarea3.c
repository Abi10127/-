//En una Casa de Cabio necesitan construir un programa que dado como
//dato una cantidad expresada en d ́olares, convierta esa cantidad en pesos.
//Construir el diagrama de ujo correspondiente. Tomar en cuenta que:1dolar ↢ 11.96pesos.


#include <stdio.h>
int main ()
{
  float p, d, t;
  d = 11.96;

  printf("Ingrese la cantidad deseada de dólares a cambiar: ");
  scanf("%f", &p);

  t = d*p;

  printf("El total convertido a pesos es: %f\n", t);
  return 0;
}
