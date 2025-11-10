#include <stdio.h>

void calificar(void);

int main (void)
{
        calificar();

        return 0;
}

void calificar (void)
{
        int calificacion;

        printf("Escribe tu calificación: ");
        scanf("%d",&calificacion);

        if (calificacion >= 6) {
                printf("Pasaste!\n");
        } //Fin if//

        else {
                printf("Reprobado\n");
        } //Fin else//

}
