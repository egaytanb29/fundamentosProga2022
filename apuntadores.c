#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void intercambia(int *x, int *y);

int main (void)
{
  int a=5;
  int b=3;

  printf("a = %d, b = %d\n", a,b);

  intercambia(&a,&b);

  printf("a = %d, b = %d\n", a,b);
}

void intercambia(int *x, int *y)
{
  int z;

  z=*x;
  *x=*y;  //Declarar apuntador
  *y=z;  //Obtener valor
}
