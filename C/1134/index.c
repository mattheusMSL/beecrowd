#include<stdio.h>

int main(){
  int combustivel, gasoline = 0, alcohol = 0, diesel = 0;
  
  while (1) {
    scanf("%d", &combustivel);
    if(combustivel == 4){
      break;
    } if( combustivel == 1){
      alcohol++;
    } else if(combustivel == 2){
      gasoline++;
    } else if (combustivel == 3){
      diesel++;
    } else{
      continue;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcohol);
  printf("Gasolina: %d\n", gasoline);
  printf("Diesel: %d\n", diesel);

  return 0;
}