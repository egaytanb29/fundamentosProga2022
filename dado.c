#include <stdio.h>
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
        int n;
        srand(time(0));
        n = rand() % 6 + 1;

        printf("El dado da: %d\n", n);
}
