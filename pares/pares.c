#include <stdio.h>

void contador();

int main()
{
        contador();
        return 0;
}

void contador(void)
{
        int num,i=0;

        while(i<1){
                printf("Introduzca un numero par entre 11 y 200: ");
                scanf("%d",&num);

                if(num>=11 && num<=200){

                i++;}

                for(i=num;i<=200;i=i+2){
                printf("%d\n",i);}

        }


}
