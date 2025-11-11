#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arreglo(void);

int main()
{
  arreglo();
  return 0;
}

void arreglo(void)
{
  int numeros[10];
  int suma,i;
  srand(time(0));
  suma=0;

  for(i=0;i<10;i++)
    {
      numeros[i]=rand()%20+1;
      printf("%d ",numeros[i]);
    }

  for(i=0;i<10;i++)
    {
      suma=numeros[i]+suma;
      printf("%d\n",suma);
    }
}
