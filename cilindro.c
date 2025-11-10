#include <stdio.h>

void leer();

int main ()
{
        leer();
        return 0;
}

void leer (void)
{
        int diam, rad, alt, vol;
        float pi = 3.14;

        printf("Escribe el diámetro del cilindro: ");
        scanf("%d", &diam);

        printf("Escribe la altura del cilindro: ");
        scanf(" %lc", &alt);

        rad = diam/2;
        vol = pi*(rad*rad)*alt;

        printf("El volumen es %d %s: ",vol,"m³\n");

}
