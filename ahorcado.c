#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  int i=0,l,j,N;
  char palabra[12];
  strcpy(palabra, "tonala");
  printf("Bienvenido al juego del ahorcado\n");
  N = strlen(palabra);
  int probar[N];
  for (i=0;i<N;i++){
    probar[i]=0;
  }
  int fin = 0;
  while (! fin){
    printf("La palara es: ");
    for(int j=0; j < N; ++j) {
      if (probar[j]) {
        printf("%c", palabra[j]);
      }
      else {
        printf("_");
      }
    }
    printf("\n");

    char adivinar;
    printf("¿Letra? ");
    fflush(stdout);
    scanf(" %c", &adivinar);

    for(int k=0; k < N; ++k) {
      if (palabra[k] == adivinar) {
        probar[k] = 1;
      }
    }

    fin = 1;
    for(int m = 0; m < N; ++m) {
      if (!probar[m]) {
        fin = 0;
        break;
      }
    }
  }
  printf("Ganaste. La palabra es %s.\n",palabra);

  return 0;
}
