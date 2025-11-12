#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void aleatorios(int *a, int *i);

int main (void)
{
  int maximo;
  int posicion;
  srand(time(0));

  aleatorios(&maximo, &posicion);

  printf("El máximo valor es: %d\n", maximo);

  printf("La posición es: %d\n", posicion);

  return 0;
}

void aleatorios(int *a, int *i)
{
  int numeros[50];
  int j;
  srand(time(0));

  for(j=0;j<50;j++)
    {
      numeros[j]=rand()%999+1;
      printf("%d \n",numeros[j]);
    }
  *a=numeros[0];

  for(j=0;j<50;j++)
    {
      if(numeros[j] > *a)
        {
          *a=numeros[j];
          *i=j;
        }
    }

}
