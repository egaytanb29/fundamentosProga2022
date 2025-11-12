//Ernesto Gaytán 22-marzo-2022//
//Ciclos anidados//

#include <stdio.h>

void cuadro();

int main()

{
        cuadro();
        return 0;
}

void cuadro(void)
{
  int i,count,num,a=0,condicion=0,nums;

        printf("Ingrese un número del 1 al 9: ");
        scanf(" %d",&num);
        nums=num;
        a=num;

        for(i=0;i<num;i++){
                for(count=0;count<nums;count++){
                  printf("%d", a);
                  a--;
                }
                printf("\n");
                a=num;
                condicion++;
        }
}
