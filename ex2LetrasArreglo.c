//Segundo Examen Parcial (24-marzo-2022)
//Ernesto Armando Gaytán Brieño
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int aleatoriol(void);
void letrasarreglo(void);
void imprimir(char l1);

int main()
{
  srand(time(0));
  letrasarreglo();
  return 0;
}

int aleatoriol(void)
{
  char a;
  a = rand() % 25 + 'A';
  return a;
}

void letrasarreglo(void)
{
  char letras[21],temp;
  int i,j,k,m=0;
  for (i=0;i<20;i++)
    {
      letras[i]=aleatoriol();
    }
  for(k=0;k<2;k++)
    {
      for(j=0;j<20;j++)
        {
          for(i=0;i<20;i++)
            {
              if(j != i){
                while(letras[j]==letras[i])
                  {
                    letras[i]=aleatoriol();
                  }
              }
            }
        }
    }
  for (j=0;j<20;j++)
    {
      for (i=0;i<19;i++)
        {
          if(letras[i] > letras[i+1])
            {
              temp=letras[i];
              letras[i]=letras[i+1];
              letras[i+1]=temp;
            }
        }
    }
  for (i=0;i<20;i++)
    {
      imprimir(letras[i]);
    }
}

void imprimir(char l1)
{
  printf("%c\n",l1);
}
