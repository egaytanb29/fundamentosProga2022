#include <stdio.h>

void leer();

int main ()
{
  leer();
  return 0;
}

void leer (void)
{
  char letra;
  int numero;

  printf("Escribe un número: "); /* Instrucciones para leer num*/
  scanf("%d", &numero);

  printf("Escribe una letra: "); /*Instrucciones para leer char*/
  scanf(" %c", &letra);

  printf("El número es %d y la letra es %c\n", numero, letra);

}
