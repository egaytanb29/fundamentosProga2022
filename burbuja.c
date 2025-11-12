#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int numalt(void);

int main(void){

  int j,i,temp;
  int num[20];
  srand(time(0));
  for (i=0;i < 20;i++){
    num[i] = numalt();
    printf("%d\n", num[i]);
  }
  for (j=0;j<19;j++){
    for (i=0;i<19;i++){
    if (num[i] > num[i+1]){
        temp = num[i];
        num[i]=num[i+1];
        num[i+1]=temp;
      }
  }
  }
  printf("\n");
  for(i=0; i<20; i++){
    printf("%d\n", num[i]);
  }

  printf("\n");
  return 0;
}

int numalt(void){

  int n;
  n=rand() % 1000 + 1;
  return n;

}
