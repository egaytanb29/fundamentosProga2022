#include <stdio.h>

int doble(int x);
void imprimir(int resultado);

int main(void)
{
        int x,resultado;
        x=5;
        resultado=doble(x);//rseultado=?
        imprimir(resultado);
        return 0;
}

int doble(int x)
{
        x=x*2;//x=5
        return x;
}

void imprimir(int resultado)
{
        printf("%d\n", resultado);//resultado=10
}
