include <stdio.h>
#include <string.h>

int main(void){

  char texto1[10], texto2[10], texto3[10], palabra[10];
  int comp1,comp2,comp3,a;

  printf("Dame el primer nombre: ");
  gets(texto1);
  printf("Dame el segundo nombre: ");
  gets(texto2);
  printf("Dame el tercer nombre: ");
  gets(texto3);

  printf("Escriba uno de los tres nombres para comparar: ");
  gets(palabra);

  comp1 = strcmp(texto1,palabra);
  comp2 = strcmp(texto2,palabra);
  comp3 = strcmp(texto3,palabra);

  if (comp1==0){
    printf("Son iguales\n");}
  else{
    printf("El primer nombre es incorrecto.\n");}

  if (comp2==0){
    printf("Son iguales\n");}
  else{
    printf("El segundo nombre es incorrecto.\n");}

  if (comp3==0){
    printf("Son iguales\n");}
  else{
    printf("El tercer nombre es incorrecto.\n");}

  return 0;

}
