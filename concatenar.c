#include <stdio.h>
#include <string.h>

void nombre_apellido(void);

int main(void){

  nombre_apellido();

  return 0;

}

void nombre_apellido(void){
  char texto1[42], texto2[21];

  printf("Introduce tu nombre: ");
  gets(texto1); //utilizar scanf

  printf("Introduce tu apellido: ");
  gets(texto2); //utilizar scanf
  strcat(texto1, " ");
  strcat(texto1, texto2);
  printf("Te llamas %s\n", texto1);
}
