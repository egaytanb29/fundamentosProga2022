#include <stdio.h>

char convierte(char letra);

int main(void)
{
  char minuscula,letraM;
  printf("Ingrese una letra en minúscula: ");
  scanf("%c",&minuscula);
  letraM=convierte(minuscula);
  printf("Tu letra en mayúscula es %c\n",letraM);
  return 0;
}

char convierte(char letra)
{
  return letra-32;
}
