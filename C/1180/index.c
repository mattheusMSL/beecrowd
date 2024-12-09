#include<stdio.h>

void askForNumber(int *number);
void makeVector(int vector[], int *number);
void showVector(int vector[], int *number);

int main(){
  int number;
  askForNumber(&number);
  int vector[number];
  makeVector(vector, &number);
  showVector(vector, &number);
  return 0;
}

void askForNumber(int *number){
    scanf("%d", number);
    while(*number < 1 || *number > 1000){
      scanf("%d", number);
    }
}

void makeVector(int vector[], int *number){
    for(int i = 0; i < *number; i++){
        scanf("%d", &vector[i]);
    }
}

void showVector(int vector[], int *number){
    int lower = vector[0];
    int position = 0;
    for(int i = 0; i < *number; i++){
      if(vector[i] < lower){
        lower = vector[i];
        position = i;
       }
    }
    printf("Menor valor: %d\nPosicao: %d\n", lower, position); 
}   

