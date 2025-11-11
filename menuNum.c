#include <stdio.h>

void menu();

int main(void)
{
        menu();
        return 0;
}

void menu(void)
{
        int num;
        printf("Introduzca un número del 1 al 5: ");
        num=getchar(); //scanf("%c",%num);
        switch(num) {
                case '1':printf("Se ha pulsado un 1.\n");
                        break;
                case '2':printf("Se ha pulsado un 2.\n");
                        break;
                case '3':printf("Se ha pulsado un 3.\n");
                        break;
                case '4':printf("Se ha pulsado un 4.\n");
                        break;
                case '5':printf("Se ha pulsado un 5.\n");
                        break;
                default:printf("Error\n");
        }
}
