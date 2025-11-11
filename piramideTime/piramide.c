#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nletra (int n1);

int main(void)
{
        int i, j, count, n,n1, b;
        char l = 'A';
        srand(time(0));
        n=nletra(n1);
        count=1;

        for (i=1;i<=n;i++)
        {
                for(b=1;b<=n-i;b++)

                        printf("  ");

                for (j=0;j<=(count/2);j++){

                        printf("%c ", l++);

                }

        l=l-2;

        for (j=0;j<(count/2);j++){

                printf("%c ",l--);
        }

        count=count+2;
        l='A';
        printf("\n");

        }

        return 0;
}

int nletra(int n1)
{
        n1 = rand() % 26 + 1;
        return n1;
}
