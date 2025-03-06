#include <stdio.h>
#define TAM 15
#define TAM_ODD_EVEN 5

void makeVector(int vector[]){
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vector[i]);
    }
}

void makeItEvenOrOdd(int vector[], int odd[], int even[]){
    int numberOdd = 0;
    int numberEven = 0;
    
    for (int i = 0; i < TAM; i++) {
        if (vector[i] % 2 == 0) {
            even[numberEven++] = vector[i];
            if (numberEven == TAM_ODD_EVEN) { 
                for (int j = 0; j < numberEven; j++) {
                    printf("par[%d] = %d\n", j, even[j]);
                }
                numberEven = 0; 
            }
        } else {
            odd[numberOdd++] = vector[i];
            if (numberOdd == TAM_ODD_EVEN) { 
                for (int j = 0; j < numberOdd; j++) {
                    printf("impar[%d] = %d\n", j, odd[j]);
                }
                numberOdd = 0; 
            }
        }
    }

    
    for (int j = 0; j < numberOdd; j++) {
        printf("impar[%d] = %d\n", j, odd[j]);
    }
          
    for (int j = 0; j < numberEven; j++) {
        printf("par[%d] = %d\n", j, even[j]);
    }
}


int main(){
   int vector[TAM];
   int even[TAM_ODD_EVEN];
   int odd[TAM_ODD_EVEN];
   
   makeVector(vector);
   makeItEvenOrOdd(vector, odd, even);
    return 0;
}