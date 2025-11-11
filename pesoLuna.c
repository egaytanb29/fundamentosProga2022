#include <stdio.h>

void luna();

int main(void)
{
        luna();
        return 0;
}

void luna(void)
{
        int num;
        float T=9.81,L=1.622,p;

        printf("Introduzca su peso en kg: ");
        scanf("%d",&num);

        p=(num/T)*L;

        printf("Su peso en la luna es: %f\n",p);

}
