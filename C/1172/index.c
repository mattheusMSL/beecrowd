#include<stdio.h>

void makeVet(int x[], int length);
void showVet(int x[], int length);

int main(){
  int x[10];
  makeVet(x, 10);
  showVet(x, 10);
  return 0;
}

void makeVet(int x[], int length){
  for(int i = 0; i < length; i++){
    scanf("%d", &x[i]);
    if(x[i] <= 0){
       x[i] = 1;
      }
  }
}

void showVet(int x[], int length){
  for(int j = 0; j < 10; j++){
    printf("x[%d] = %d\n", j, x[j]);
   }
}