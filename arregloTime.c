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
  int suma,i,mx,promedio;
  srand(time(0));
  suma=0;

  for(i=0;i<10;i++)
    {
      numeros[i]=rand()%100+1;
      printf("%d ",numeros[i]);
    }

  for(i=0;i<10;i++){
      suma=numeros[i]+suma;
    }

  for(i=0;i<10;i++){
      suma=numeros[i]+suma;
  }


      printf("Su promedio es: %d\n",promedio);

   mx = numeros[0];

    for(i=1;i<10;i++)
      {
        if(suma>mx)
          {
            mx=numeros[i];
          }
      }
  printf("Números por arriba del promedio son: %d\n",mx);
}
