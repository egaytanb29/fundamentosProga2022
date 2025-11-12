#include <stdio.h>
#include <string.h>

void palabra(void);

int main(void){

  palabra();

  return 0;

}

void palabra(void){

  char palabra[11], letra, cambiar; //'\0'
  int i=0,com=0;

  printf("Dame una palabra: ");
  scanf("%s",palabra);
  printf("Dime una letra de la palabra: ");
  scanf(" %c",&letra);
  printf("Dime una letra para cambiar: ");
  scanf(" %c",&cambiar);

  for(i=0;i<11;i++){
      if(letra==palabra[i])
              {
       palabra[i]=cambiar;
      }
  }

  printf("\n%s\n", palabra);

}
