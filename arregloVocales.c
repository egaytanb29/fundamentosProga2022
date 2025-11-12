#include<stdio.h>

void arreglo(void);

int main()
{
  arreglo();
  return 0;
}

void arreglo(void)
{
  char palabra[20];
  int i=0,x=0;

  printf("Dame una palabra: ");
  scanf("%s",palabra);

  for(i=0;i<19;i++){
    palabra[i]=' ';
  }

  if(palabra[x] == 'a' || palabra[x] == 'A' || palabra[x] == 'E' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'I'
     || palabra[x] == 'o' || palabra[x] == 'O' || palabra[x] == 'u' || palabra[x] == 'U'){

    i++;
    x++;
  }

  printf("Número de vocales son: %d\n", i);

}
