#include<stdio.h>
#include<math.h>

int main(){
  int numberN;
   scanf("%d", &numberN);
  for(int i = 1; i <= numberN; i++){
    printf("%d %d %d\n", i, (int)pow(i,2), (int)pow(i,3));   
  }
  return 0;
}