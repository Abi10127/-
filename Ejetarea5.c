//En un negocio de productos electrodomésticos aplican un descuento del
//8% a todos aquellos clientes cuya compra es superior a 2,500. Dado como
//dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
//Hacer el diagrama de flujo correspondiente.

#include <stdio.h>
int main()
{
  float p,T;
  printf("Ingrese el monto a pagar: ");
  scanf("%f", &p);

  if (p > 2500)
  {
    T = (p*92)/100;
    printf("El monto total a pagar es: %f\n", T);
  }
  printf("Descuento inválido, monto total a pagar: %f\n", p);
  return 0;
}
