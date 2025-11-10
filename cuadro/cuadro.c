//Ernesto Gaytán 14-febrero-2022//
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
        int i,count,num;

        printf("Ingrese un número del 1 al 9: ");
        scanf(" %d",&num);

        for(i=1;i<=num;i++)
        {
                printf("\n");

                for(count=1;count<=num;count++)

                printf("%d", count);
        }

        printf("\n");
}
