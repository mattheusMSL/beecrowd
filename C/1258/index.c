#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAMN 101
#define MAXZ 21
#define MAX 60

typedef struct {
  char name[TAMN];
  char tshirtColour[MAXZ];
  char sizeT;
} TSHIRT;

// função para ler os dados de entrada 
void readData(TSHIRT *orders, int number){
  for(int i = 0; i < number; i++){ // for para quantidade de pedidos que devem ser processados 
     scanf("%[^\n]%*c", (orders + i)->name); //tshirts[i].name 
     scanf("%[^' ']%*c", orders[i].tshirtColour); 
     scanf(" %c%*c", &(orders + i)->sizeT);
  }
}
// imprime os dados do array/ vetor de pedidos
void printData(TSHIRT orders[], int number){
  for(int i = 0; i < number; i++){
    printf("%s %c %s\n", (orders + i)->tshirtColour, (orders + i)->sizeT, (orders + i)->name);
  }
}
// troca os valores de lugar 
void swap(TSHIRT *d1, TSHIRT *d2){
    TSHIRT aux;
    aux = *d1;
    *d1 = *d2;
    *d2 = aux;
}

void sortName(TSHIRT orders[], int number){
  for(int i = 0; i < number; i++){
    for(int j = i + 1; j < number; j++){
      if(strcmp(orders[i].name, orders[j].name) > 0){
         swap(&orders[i], &orders[j]);
      }
    }
  }
}

void sortSize(TSHIRT *orders, int number){
  for(int i = 0; i < number - 1 ; i++){
    for(int j = 0; j < number - i - 1; j++){
      if(orders[j].sizeT < orders[j+1].sizeT){
         swap(&orders[j], &orders[j+1]);
      }
    }
  }
}

void sortColour(TSHIRT orders[], int number){
  for(int i = 0; i < number; i++){
    for(int j = 0; j < number - i - 1; j++){
      if(strcmp(orders[j].tshirtColour, orders[j + 1].tshirtColour) > 0){
         swap(&orders[j], &orders[j + 1]);
      }
    }
  }
}

int main(){
  int number;
  TSHIRT orders[MAX]; 
  scanf("%d%*c", &number);
  while(number){
     readData(orders, number);
     sortName(orders, number);
     sortSize(orders, number);
     sortColour(orders, number);
     printData(orders, number);
     scanf("%d%*c", &number);
     if(number){
       printf("\n");
     }
  }
  return 0;
}