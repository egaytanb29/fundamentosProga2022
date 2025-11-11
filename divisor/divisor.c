#include <stdio.h>

void divisor(void);

int main(void)
{
  divisor();
  return 0;
}

void divisor(void)
{
  int n1,n2,x,y,r;
  printf("Dame el primer número: ");
  scanf("%d",&n1);
  printf("Dame el segundo número: ");
  scanf("%d",&n2);

  if(n1>n2){
    x=n1;
    y=n2;}
  else{
    x=n2;
    y=n1;}

  do{
    r=y;
    y=x%y;
    x=y;
  }while(y!=0);

    scanf("El máximo común divisor entre %d y %d es %d.",n1,n2,r);
}
