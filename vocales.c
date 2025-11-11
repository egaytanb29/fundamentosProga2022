#include <stdio.h>

void vocales();

int main(void)
{
        vocales();
        return 0;
}

void vocales(void)
{
        char letra;

        printf("Introduzca una letra: ");
        scanf("%c",&letra);

        if ((letra=='a') || (letra=='A') || (letra=='e') || (letra=='E') || (letra=='i') || (letra=='I') || (letra=='o'\
) || (letra=='O') || (letra=='u') || (letra=='U')){
                printf("Es vocal.\n");
        }
        else{
                printf("No es vocal.\n");
        }
}
