#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio (void);

int main(void)
{
        aleatorio();
        return 0;
}

void aleatorio(void)
{
        int n;
        srand(time(0));
        n = rand() % 10 + 1;
        printf("Un número entre 1 y 10: %d\n", n);
}
