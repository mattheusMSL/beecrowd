#include<stdio.h>

int main(){
  float numberBreak;
  scanf("%f", &numberBreak);
  if (numberBreak >= 0 && numberBreak<= 25.00){
      printf("Intervalo [0,25]\n");
  } else if(numberBreak >= 25.01 && numberBreak <= 50.00){
       printf("Intervalo (25,50]\n");
  } else if (numberBreak >= 50.01 && numberBreak <= 100.00){
        printf("Intervalo (75,100]\n");
  } else { 
   printf("Fora de intervalo\n");
  }
  return 0;
}