//usando por primera vez scanf
//sirve para ingresar datos que se leen desde el teclado

#include <stdio.h>
int main()
{
  float flotante;
  int entero;

  //esta parte hace que se lean lo ingresado por teclado
  printf("Ingresa el valor flotante: ");
  scanf("%f", &flotante);
  printf("Ingresa el valor entero: ");
  scanf("%i", &entero);

  //se agrega además esta sección para regresar al final la frase con los valores ingresados
  printf("El valor flotante ingresado es: %f\n", flotante);
  printf("El valor entero ingresado es: %i\n", entero);
  return 0;
}
