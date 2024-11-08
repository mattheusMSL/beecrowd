#include<stdio.h>

int somadiv(int n);

int main(){
  int num;
  scanf("%d", &num);
  somadiv(num) == num ? printf("Sim\n"): printf("Não\n");
  return 0;
}

int somadiv(int n){
  int count = 0;
  for(int i = 0; i < n; i++){
    if(n % i == 0){
       count += i;
    }
  }
  return count;
}