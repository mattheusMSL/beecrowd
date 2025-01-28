#include<stdio.h>
#include "estrutura.h"

int main(){
  char c,c2;
  scanf("%c", &c);
  c2 = geraMinuscula(c);
  printf("%c\n", c2);
  c2 = geraMaiuscula(c);
  printf("%c\n", c2);
  return 0;
}