#include <stdio.h>

void par_impar();

int main(void)
{
        par_impar();
        return 0;
}

void par_impar(void)
{
        int num,residuo;

        printf("Introduzca un número: ");
        scanf("%d", &num);

        residuo = num%2;

        if (residuo==0){
                printf("El número es par.\n");
        }
        else{
                printf("El número es impar.\n");
        }
}
