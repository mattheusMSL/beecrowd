#include<stdio.h>

int main(){
  char str[10];
  scanf("%s", str);
  for(int i = 0; i < 10; i++){
   printf("%c", str[i]);
  }
  return 0;
}