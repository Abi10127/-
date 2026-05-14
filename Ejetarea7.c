//Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
//en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
//También se sabe que si el numero de días de estancia es mayor a 7 y la
//distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
//un descuento del 30%. El precio por km es de 0.23.

#include <stdio.h>
int main()
{
  float df, di, t, p, pf;

  printf("Ingresa la distancia de ida recorrida: ");
  scanf("%f", &di);
  printf("Ingrese el número de días de estancia: ");
  scanf("%f", &t);
  df = di*2;

  if(df > 800)
  {
    if(t > 7)
    {
      p = df*0.23;
      pf = (p*70)/100;
      printf("El precio final a pagar es: %f\n", pf);
    }
    else
    {
      p = df*0.23;
      printf("El precio final a pagar es: %f\n", p);
    }
  }
  else
  {
    p = df*0.23;
    printf("El precio final a pagar es: %f\n", p);
  }
  return 0;
}
