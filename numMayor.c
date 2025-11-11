#include <stdio.h>

int mayor (int x, int y);

int main(void)
{
        int n1,n2,resultado;
        printf("Dame un número: ");
        scanf("%d",&n1);
        printf("Dame otro número: ");
        scanf("%d",&n2);
        resultado=mayor(n1,n2);
        printf("%d\n",resultado);
        return 0;
}

int mayor(int x, int y)
{
        if(x>y){
                return x;}
        else if(y>x){
                return y;}
        else{
                return x;}
}
