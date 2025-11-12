#include<stdio.h>

int Fact(int n);

int main()
{
  int n;
  printf("Dame un número del 1 al 7: ");
  scanf("%d",&n);
  printf("El factorial de %d es: %d\n",n,Fact(n));
  return 0;
}

int Fact(int n)
{
  if ((n>=1) && (n<=7)){
    return n*Fact(n-1);}
  else{
    return 1;}
}
