#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int aleatorio(void);

int main(void)
{
  int arreglo[10];
  int x,min,p;
  srand(time(0));

  for(x=0;x<10;x++)
    {
      arreglo[x]=aleatorio();
    }
  for (x=0;x<10;x++)
    {
      printf("%d\n",arreglo[x]);
    }
  for (x=0;x<10;x++)
    {
      if(arreglo[x]<min){
        min=arreglo[x];}
      printf("%d\n",min);
    }

   p=arreglo[x]/10;
   printf("El promedio es: %d\n",p);
}

int aleatorio(void)
{
  return rand() % 100 + 1;
}
