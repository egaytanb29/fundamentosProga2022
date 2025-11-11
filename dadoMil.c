#include <stdlib.h>
#include <time.h>

void dado (void);

int main(void)
{
        dado();
        return 0;
}

void dado(void)
{
        int n,i,a=0,b=0,c=0,d=0,e=0,f=0;
        srand(time(0));
        for(i=1;i<=1000;i++){
                n = rand() % 6 + 1;
                if(n==1){
                a++;
                }else if(n==2){
                b++;
                }else if(n==3){
                c++;
                }else if(n==4){
                d++;
                }else if(n==5){
                e++;
                }else if(n==6){
                f++;}
        }
        printf("El dado da 1: %d veces\n",a);
        printf("El dado da 2: %d veces\n",b);
        printf("El dado da 3: %d veces\n",c);
        printf("El dado da 4: %d veces\n",d);
        printf("El dado da 5: %d veces\n",e);
        printf("El dado da 6: %d veces\n",f);
}
