//Dado como dato el sueldo de un trabajador considere un aumento del
//15% si un sueldo es inferior a 1,000 y de un 12% en caso contrario.
//Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
//flujo correspondiente.

#include <stdio.h>
int main()
{
  float s, a, T;

  printf("Ingrese el sueldo del trabajador: ");
  scanf("%f", &s);

  if(s < 1000)
  {
    a = (s*15)/100;
    T = a + s;
    printf("El sueldo final del trabajador será del: %f\n", T);
  }
  else
  {
    a = (s*12)/100;
    T = a + s;
    printf("El sueldo final del trabajador será del: %f\n", T);
  }
  return 0;
}
