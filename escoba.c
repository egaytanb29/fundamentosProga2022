#include <stdio.h>
#include <string.h>

void palabra(void);

int main(void){

  char palabra[10]; //'\0'
  char temp;
  int x=0,i;

  printf("Dame una palabra: ");
  scanf("%s", palabra);

  for(i=0;i<8;i++){
    x=0;
  while(palabra[x+1]!='\0')
    {
    if(palabra[x]>palabra[x+1])
      {
        temp=palabra[x+1];
        palabra[x+1]=palabra[x];
        palabra[x]=temp;
      }
    x++;
    }
  }

  printf("\n%s\n", palabra);

  return 0;

}
