#include<stdio.h>

void dream (int nivel);

int main(void)
{
  printf("Estoy despierto, nivel 1. Listo para dormir....\n");
  dream(1);
  printf("Desperté en un avión aterrizando en LA\n");

  return 0;
}

void dream (int nivel)
{
  int inception =0;

  nivel = nivel + 1;
  printf("Estoy durmiendo en el nivel %d\n",nivel);

  if (nivel == 5)
    inception=1;           //misión cumplida

  else if (inception != 1)
    dream(nivel);          //siguiente nivel de sueño
}
