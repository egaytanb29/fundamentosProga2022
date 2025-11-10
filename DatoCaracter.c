/* Ejemplo de variables char*/
#include <stdio.h>

void DatoCaracter();

int main ()
{
        DatoCaracter();
        return 0;
}

void DatoCaracter (void)
{
        char letra1 = 'A';
        char letra2 = 'B';
        char letra3 = 'C';

        printf("Las primer tres letras del abecedario son: %c, %c, %c\n", letra2, letra1,letra3);

}
