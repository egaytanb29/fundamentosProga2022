#include <stdio.h>
#include <string.h>

void compara(void);

int main(void){

  compara();

  return 0;

}

void compara(void){
  char texto1[10], texto2[10];
  int comparacion;

  printf("Introduce una palabra: ");
  gets(texto1); //utilizar scanf
  printf("Introduce una palabra: ");
  gets(texto2); //scanf

  comparacion = strcmp(texto1,texto2);

  if (comparacion==0){
    printf("Son iguales\n"); //Imprimir comparacion
  printf(" %d\n",comparacion);}
  else if (comparacion>0){
    printf("La primera palabra es mayor\n");}
  else{
    printf("La segunda palabra es mayor\n");}
}
