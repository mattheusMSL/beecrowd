#include<stdio.h>

int isMulti(int num);
void isEqual(int *numOne, int *numTwo);

int main(){
  int numOne, numTwo;
  scanf("%d %d", &numOne, &numTwo);
  while(numOne != 0 && numTwo != 0){
   isEqual(&numOne, &numTwo);
   scanf("%d %d", &numOne, &numTwo);
  }
  return 0;
}

int isMulti(int num){
  int sum = 0;
  for (int i = 1; i < num; i++){
        if(num % i == 0){
          sum += i;
        }
      }
   return sum;
}

void isEqual(int *numOne, int *numTwo){
  int count = 0;
  if(isMulti(*numOne) == *numTwo && isMulti(*numTwo) == *numOne){
    count++;
    printf("#amigo(%d, %d) = %d\n", *numOne, *numTwo, count);
  } else{
    printf("#amigo(%d, %d) = %d\n", *numOne, *numTwo, count);
  }
}