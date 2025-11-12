#include<stdio.h>

void arreglo(void);

int main()
{
  arreglo();
  return 0;
}

void arreglo(void)
{
  int numeros[5];
  int longitud,temporal,i,x;

  printf("Dame el primer número: ");
  scanf("%d", &numeros[0]);
  printf("Dame el segundo número: ");
  scanf("%d", &numeros[1]);
  printf("Dame el tercer número: ");
  scanf("%d", &numeros[2]);
  printf("Dame el cuarto número: ");
  scanf("%d", &numeros[3]);
  printf("Dame el quinto número: ");
  scanf("%d", &numeros[4]);

  longitud = sizeof(numeros)/sizeof(numeros[0]);

  for (x=0; x<longitud/2; x++)
    {
    temporal = numeros[x];
    numeros[x] = numeros[longitud-x-1];
    numeros[longitud-x-1] = temporal;
    }

  for (i=0; i<longitud; i++)
    {
    printf("%d \n", numeros[i]);
    }

}
