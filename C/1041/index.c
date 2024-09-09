#include<stdio.h>

int main(void){
  float coordinateX, coordinateY;
  scanf("%f %f", &coordinateX, &coordinateY);

  (coordinateX == 0) ? printf("Eixo Y\n") : (coordinateY == 0) ? printf("Eixo X\n"):
  (coordinateX == 0 && coordinateY == 0) ? printf("Origem\n"): 
  (coordinateX > 0 && coordinateY > 0) ? printf("Q1\n"):
  (coordinateX < 0 && coordinateY > 0) ? printf("Q2\n"):
  (coordinateX < 0 && coordinateY < 0) ? printf("Q3\n"):
  (coordinateX > 0 && coordinateY < 0) ? printf("Q4\n"):  
  printf("Error\n");
  
  return 0;
}