#include <stdio.h>

void ciclos();

int main ()
{
        ciclos();
        return 0;
}

void ciclos (void)
{
        int count;

        for ( count=1;count<= 10; count++)

        printf(" %d\n", count);

}
