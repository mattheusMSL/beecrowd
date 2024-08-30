#include<stdio.h>

int main(void){
   
   int valueWish, bombValue;
   scanf("%d %d", &valueWish, &bombValue);
   if (valueWish >= 1 && valueWish <= 40){
       valueWish -= bombValue;
       printf("%d\n", valueWish);
   }
  return 0;
}