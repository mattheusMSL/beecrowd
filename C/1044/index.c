#include<stdio.h>

int main(){
  int numberA, numberB;
  scanf("%d%d",&numberA, &numberB);
  numberB % numberA == 0 ?  printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n");
  return 0;
}