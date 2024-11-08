#include<stdio.h>

int contaparelhos(int x, int y);

int main(){
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  while(num1 > 0 && num2 > 0){
     int result = contaparelhos(num1, num2);
     printf("#parelhos = %d\n", result);
     scanf("%d %d", &num1, &num2);
  }
  return 0;
}

int contaparelhos(int x, int y){
  int count = 0;
  while (x > 0 && y > 0) {
      if (x % 10 == y % 10) { 
          count++;
      }
      x /= 10; 
      y /= 10; 
  }
    return count;
}
