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
  int numeros[20];
  int mayor,menor,i;
  srand(time(0));
  mayor = menor = numeros[20];

  for(i=0;i<10;i++)
    {
      numeros[i]=rand()%100+1;
      printf("%d \n",numeros[i]);
    }

  for(i=0;i<20;i++)
    {
      if (numeros[i]>numeros[i+1]){
        mayor = numeros[i-1];
      } else if (numeros[i]<numeros[i+1]){
        menor = numeros[i-1];
      }

    }

  printf("El número mayor es %d y el menor es %d\n",mayor,menor);
}
