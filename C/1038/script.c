#include<stdio.h>

int main(){
  int foodNumber, quantityOfOrder;
  float food;
  scanf("%d %d", &foodNumber, &quantityOfOrder);
  switch (foodNumber){
    case 1: food = 4.00; break;
    case 2: food = 4.50; break;
    case 3: food = 5.00; break;
    case 4: food = 2.00; break;
    case 5: food = 1.50; break;
  }
  float total = quantityOfOrder * food;
  printf("Total: R$ %.2f\n", total);
  return 0;
}