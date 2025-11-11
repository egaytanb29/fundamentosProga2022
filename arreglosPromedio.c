#include<stdio.h>

void arreglo(void);

int main()
{
  arreglo();
  return 0;
}

void arreglo(void)
{
  float numeros[4];
  float promedio;

  printf("Dame el primer número: ");
  scanf("%f", &numeros[0]);
  printf("Dame el segundo número: ");
  scanf("%f", &numeros[1]);
  printf("Dame el tercer número: ");
  scanf("%f", &numeros[2]);
  printf("Dame el cuarto número: ");
  scanf("%f", &numeros[3]);

  promedio=(numeros[0]+numeros[1]+numeros[2]+numeros[3])/4;

  printf("Su promedio es %f\n",promedio);

}
