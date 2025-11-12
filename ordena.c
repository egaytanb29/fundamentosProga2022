#include <stdlib.h>
#include <string.h>

int main(void){
  int i,j;
  char nombre[3][10];
  char aux[20];

  for(i=0;i<3;i++){
    printf("Ingresa un nombre: ");
    scanf("%s",&nombre[i]);
  }

  for(i=1;i<4;i++)
    for(j=0;j<3-i;j++)
      if(strcmp(nombre[j],nombre[j+1])>0){
        strcpy(aux,nombre[j]);
        strcpy(nombre[j],nombre[j+1]);
        strcpy(nombre[j+1],aux);
      }

  for(i=0;i<3;i++){
    printf("%s \n",nombre[i]);
  }

  return 0;
}
