#include <stdio.h>

void operacion();

int main ()
{
        operacion();
        return 0;
}

void operacion (void)
{
  int count = 1;
  while (count < 11 )
    {
      count = count + 2;
      printf ( "%d\n", count );
      count = count -1;
    }
}
