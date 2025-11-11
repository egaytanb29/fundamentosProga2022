#include <stdio.h>

int lado(void);

int main(void)
{
  int nlados=0, i=0, j=0;

  nlados=lado();

  for(i=0; i<nlados; i++)
    {
      for(j=0; j<nlados; j++)
        {
          printf("*");
        }
      printf("\n");
    }

  printf("\n");

  return 0;
}

int lado(void)
{
  int lado;

  printf("Programa que dibuje 4 cuadrados rellenos de asteriscos, incrementando su lado inicial de 2 en 2.\n");
  printf("Ingrese el número de lados entre 2 y 10: ");
  scanf("%d", &lado);

  while(lado<2 || lado>10)
    {
      printf("Error. Ingrese el número de lados entre 2 y 10.\n");
    }

  return lado;
}
