#include <stdio.h>
#include <string.h>

void caracteres(void);

int main(void){

  caracteres();

  return 0

}

void caracteres(void){
  char texto1[40], texto2[40], texto[10];

  printf("Introduce una frase: ");
  gets(texto1);

  strcpy(texto2, texto1);
  printf("Una copia de tu texto es %s\n", texto2);
  strncpy(texto3,texto1,4);
  printf("Y sus 4 primeras letras son %s\n", texto3);
}
