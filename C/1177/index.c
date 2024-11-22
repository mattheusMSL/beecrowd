#include <stdio.h>
#define TAM 1000

void makeVector(int t, int vector[]){
    for(int i = 0; i < TAM; i++){
        vector[i] = i % t;
    }
}

void printVector(int vector[]){
    for (int i = 0; i < TAM; i++) {
        printf("N[%d] = %d\n", i, vector[i]);
    }
}

int main(){
    int vector[TAM], t;
    scanf("%d", &t);
    makeVector(t, vector);
    printVector(vector);
    return 0;
}