#include <stdio.h>

void cuadro();

int main()
{
        cuadro();
        return 0;
}

void cuadro(void)
{
        int num,i,count,resid;

        printf("Ingrese un número del 1 al 9: ");
        scanf(" %d",&num);

        for(i=1;i<=num;i++)

        {
                printf("\n");

                count=1;

                resid=i%2;

                if(resid !=0){
                        for(count=1;count<=num;count++){
                        printf("%d", count);}
                        }

                else{
                        for(count=num;count>0;count--)
                        printf("%d", count);
                }

        }
}
