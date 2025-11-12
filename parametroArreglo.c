#include <stdio.h>

void modificar(int a[]);

int main (void)
{
  int cont, a[3];
  printf("\nDesde main, antes de llamar a la función\n");
  for(cont=0;cont<=2;cont++)
    {
      a[cont]=cont+1;
      printf("a[%d] = %d\n",cont,a[cont]);
    }
  modificar (a);
  printf("\nDesde main después de llamar la función:\n");
  for(cont=0;cont<=2;cont++)
    {
      printf("a[%d] = %d\n",cont,a[cont]);
    }
}

void modificar(int a[])
{
  int cont;
  printf("\nDesde la función, después de modificar los valores:\n");
  for(cont=0;cont<=2;cont++)
    {
      a[cont]=123;
      printf("a[%d] = %d\n",cont,a[cont]);
    }
}
