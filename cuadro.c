#include <stdio.h>

void cuadro();

int main(void)
{
        cuadro();
        return 0;
}

void cuadro(void)
{
        int num,a,x,i;
        char espacio=' ';

        printf("Introduzca un número del 1 al 9: ");
        scanf("%d",&num);

        for (i=1;i<=num;i++)

                for (x=1;x<=num;x++)

                        if ((i==1) || (i==num) || (x==1) || (x==num)){
                        printf(" %d",num);}

                        else{

                        printf(" \n ");
                        }

        printf("\n");
}
