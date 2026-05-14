//Escriba un diagrama de flujo tal que dado como datos dos números y
//calcular la suma, resta y multiplicación de dichos números

#include <stdio.h>
int main()
{
  int a, b;
  a = 127;
  b = 13;

  //las operaciones se hacen de manera directa sobre el comando de printf y 
  //no se guardan en otra variable ya que no serán necesarias después
  printf("La suma de a y b es: %i\n", a+b);
  printf("La resta de a y b es: %i\n", a-b);
  printf("La multiplicación de a y b es: %i\n", a*b);
  return 0;
}
  
