#include <stdio.h>

void prioridad();

int main(void)
{
        prioridad();
        return 0;
}

void prioridad(void)
{
        int A,B,C,D;

        A=2+3*5;
        B=(20+5)%6;
        C=15-5*6/10;
        D=2+10/5*2-7%1;

        printf("A: %d\n",A);
        printf("B: %d\n",B);
        printf("C: %d\n",C);
        printf("D: %d\n",D);

}
