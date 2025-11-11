#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(void);

int main(void)
{
        int r1=0,r2=0,intentos=0;
        srand(time(0));
        do{
        r1=dado();
        r2=dado();
        if(r1!=r2){
          printf("Volviendo a lanzar los dados.\n");
          printf("Obtuviste en el dado 1: %d y en el 2: %d.\n",r1,r2);
          intentos++;
        }
        else{
          intentos++;
          printf("Ganaste. Obtuviste en el dado 1: %d y en el 2: %d.\n",r1,r2);
          printf("Llevas %d intentos.\n",intentos);
        }
        }while(r1!=r2);

        return 0;
}

int dado(void)
{
  int d1;
  d1 = rand() % 6 + 1;
  return d1;
}

