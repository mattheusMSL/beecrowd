#include<stdio.h>

int main(){
 int t1,t2 ,t3;
 char str1[20], str2[20], str3[20];
  scanf("%s", str1);
  scanf("%s", str2); 
  scanf("%s", str3);
  
  t1 = strlen(str1);
  t2 = strlen(str2);
  t3 = strlen(str3);

  printf("%d\n", strlen(str1));
   return 0;
}