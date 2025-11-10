/* 10-FEB-2022 */
/* Ejemplo: Función while*/

#include <stdio.h>

void contador();

int main()
{
        contador();
        return 0;
} /* Fin del Programa*/

void contador(void)
{
        int count = 1; /*Declaración/Inicio de variable */
        while (count<11) /* Función cíclica*/
        {printf( "%d\n",count); /* Imprimir en pantalla */
                count=count+1;
        }

}
