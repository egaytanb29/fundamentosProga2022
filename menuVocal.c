#include <stdio.h>

void menu();

int main(void)
{
        menu();
        return 0;
}

void menu(void)
{
        char letra;
        printf("Introduzca una vocal: ");
        letra=getchar(); //scanf("%c",%letra);
        switch(letra) {
                case 'a':printf("Se ha pulsado una a.\n");
                        break;
                case 'e':printf("Se ha pulsado una e.\n");
                        break;
                case 'i':printf("Se ha pulsado una i.\n");
                        break;
                case 'o':printf("Se ha pulsado una o.\n");
                        break;
                case 'u':printf("Se ha pulsado una u.\n");
                        break;
                default:printf("Error\n");
        }
}
