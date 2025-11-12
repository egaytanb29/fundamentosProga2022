#include <stdio.h>

long fibonacci(long n);

int main(void)
{
  int n,i=0,j;
  printf("Dame un número: ");
  scanf("%d",&n);
  for(j=1;j<=n;j++)
    {
  printf("Fibonacci=%ld\n",fibonacci(i));
  i++;
    }
  return 0;
}

long fibonacci(long n)
{
  if(n==0 || n==1)
  {
    return n;
  }
  else
    {
      return (fibonacci(n-1) + fibonacci(n-2));
    }
}
