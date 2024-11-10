#include<stdio.h>

void showLoop(int *number, char characterOne, char characterTwo);

int main(){
  int number; char characterOne, characterTwo;
  scanf("%d %c %c", &number, &characterOne, &characterTwo);
  while(number != -1){
   showLoop(&number, characterOne, characterTwo);
   scanf("%d %c %c", &number, &characterOne, &characterTwo);
  } 
  return 0;
}

void showLoop(int *number, char characterOne, char characterTwo){
  for(int i = 0; i < *number; i++){
      for (int j = 0; j < *number - i; j++) {
            printf("%c", characterOne);
        }
        for (int j = 0; j < i; j++) {
            printf("%c", characterTwo);
        }
        printf("\n");
  }
}