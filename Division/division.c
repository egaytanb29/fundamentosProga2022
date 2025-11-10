#include <stdio.h>

void division();

int main ()
{
        division();
        return 0;
}

void division (void)
{
        int n1,n2,res,result;

        printf("Dame un número (numerador): ");
        scanf("%d", &n1);

        printf("Dame el otro número (denominador): ");
        scanf("%d", &n2);

        result = n1/n2;
        res = n1%n2;

        printf("El cociente es : %d\n",result);

        printf("El residuo es : %d\n",res);
}
