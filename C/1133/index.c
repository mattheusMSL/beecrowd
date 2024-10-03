#include<stdio.h>

int main(){
  int numberX, numberY, temp;

  scanf("%d %d", &numberX, &numberY);

  if (numberX > numberY) {
      temp = numberX;
      numberX = numberY;
      numberY = temp;
  }

  for(int i = numberX + 1; i < numberY; i++){
    if(i % 5 == 2 || i % 5 == 3){  
        printf("%d\n", i);
      }
  }
  return 0;
}