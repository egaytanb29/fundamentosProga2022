#include<stdio.h>

void arreglo(void);

int main()
{
  arreglo();
  return 0;
}

void arreglo(void)
{
  int numero[5]; //vamos a tener 5 enteros en el arreglo
  int suma,i;

  numero[0] = 200; //Almacenamos en la 1er posición del arreglo
  numero[1] = 150; //Almacenamos en la 2nda posición del arreglo
  numero[2] = 100; //Almacenamos en la 3er posición del arreglo
  numero[3] = -50; //Almacenamos en la 4ta posición del arreglo
  numero[4] = 300; //Almacenamos en la 5ta posición del arreglo

  suma = numero[0] + numero[1] +  numero[2] +  numero[3] +  numero[4];

  printf("Su suma es %d\n",suma);

  //suma pero con un for

  for (i=0;i<5;i++)
    {
      numero[i]=5;
    }
  printf("Su suma es %d\n",suma);

}
