#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivina();

int main(void)
{
        adivina();
        return 0;
}

void adivina(void)
{
        int n,x,a;

        srand(time(0));
        n = rand() % 1000 + 1;
        x=5;

        printf("Adivina el número, entre el 1 al 1,000. Tienes 5 intentos.\n");

        while(x>0){
                printf("Ingrese un número: ");
                scanf("%d",&a);

                if(n==a){
                        printf("Felicidades adivinaste el número.\n");
                        x=0;}
                else{
                        (x=x-1);
                                if(x==0){
                                        printf("Has fallado los 5 intentos. El número era: %d\n",n);}
                                else{
                                        printf("Fallaste, te queda otro intento.\n");}
                }
        }
}
