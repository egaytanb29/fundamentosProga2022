#include<stdio.h>

void cadena(void);

int main()
{
  cadena();
  return 0;
}

void cadena(void)
{
  char texto[20];

  printf("Introduce tu nombre: ");
  scanf("%s",texto); //gets(texto);
  printf("Hola, %s\n", texto);
}
