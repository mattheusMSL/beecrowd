#include <stdio.h>
#define TAM 100

void printVector(float number, int vector[]);

void createVector(float number, int vector[]){
    for(int i = 0; i < TAM; i++){
        vector[i] = number--;
    }
}

int main(){
    float number;
    int vector[TAM];
    scanf("%f", &number);
    createVector(number, vector);
    printVector(number, vector);
    return 0;
}

void printVector(float number, int vector[]){
    for(int i = 0; i < TAM; i++){
        printf("N[%d] = %.4f\n", i, number);
        number /= 2;
    }
}