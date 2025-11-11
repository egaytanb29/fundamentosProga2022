#include <stdio.h>

void fibonacci();

int main(void)
{
  fibonacci();
  return 0;
}

void fibonacci(void)
{
  int n,a=0,b=1,c,i;

  printf("Ingrese la cantidad de números para realizar la serie Fibonacci: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      if(i<=1)
        c = i;
      else{
        c = a + b;
        a = b;
        b = c;}

      printf("%d\n",c);
    }
}
