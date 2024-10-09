#include<stdio.h>

int main(){
  int numberX, numberY;
  scanf("%d %d", &numberX, &numberY);
  for(int i = 1; i <= numberY; i++){
     printf("%d", i);
        if (i % numberX == 0) {
            printf("\n");  
        } else {
            printf(" ");
  }
  return 0;
  }
}