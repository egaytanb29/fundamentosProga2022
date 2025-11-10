#include <stdio.h>

void ciclos();

int main ()
{
        ciclos();
        return 0;
}

void ciclos (void)
{
        char in1,in2,in3;
        int count,num;

        printf("Escribe la primera inicial de tu nombre: ");
        scanf(" %c", &in1);

        printf("Escribe la primera inicial de tu apellido paterno: ");
        scanf(" %c", &in2);

        printf("Escribe la primera inicial de tu apellido materno: ");
        scanf(" %c", &in3);

        printf("Escribe la cantidad de veces que quiera imprimir: ");
        scanf(" %d", &num);
  
        count=1;

        while(count<=num)

        {printf(" %c., %c., %c.\n",in1,in2,in3);
        count++;
        }

}
