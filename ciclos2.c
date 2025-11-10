/* 50  multiplos de 3*/

#include <stdio.h>

void ciclo();

int main ()
{
        ciclo();
        return 0;
}

void ciclo (void)
{
        int count;

        for (count = 1;count<=50; count++)

        if (count%3==0)
                printf(" %d\n", count);

}
