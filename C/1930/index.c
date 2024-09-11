#include<stdio.h>

int main(){
  int t1,t2,t3,t4,tomadas;
  scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
  (t1 >=1 || t1 <= 6) ? t1 -= 1 : t1;
  (t2 >= 1 || t2 <= 6) ? t2 -= 1 : t2;
  (t3 >= 1 || t3 <= 6) ? t3 -= 1 : t3;
  tomadas = t1 + t2 + t3 + t4;
  printf("%d\n", tomadas);
  return 0;
}