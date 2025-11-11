#include <stdio.h>

void positivo();

int main(void)
{
        positivo();
        return 0;
}

void positivo(void)
{
        int num;

        printf("Introduzca un número: ");
        scanf("%d", &num);

        if (num<0){
                printf("Es negativo.\n");
        }
        else {
                if (num==0){
                printf("Es cero.\n");
                }
                else{
                printf("Es positivo.\n");
                }
        }
}
