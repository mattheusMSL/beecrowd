#include <stdio.h>
#include <stdbool.h>

int getNumber(); // pega um número do usuário 
void isPrimeNumber(int *v, int number); // verifica se o número é primo 

int main(){
    int number = getNumber();
    int vector[number];
    for(int i = 0; i < number; i++){
        scanf("%d", &vector[i]);
    }
    isPrimeNumber(vector, number);
    return 0;
}

int getNumber(){
   int number;
   scanf("%d", &number);
   return number;
}

//verifica se o número é primo usando se ele for maior que 2 true, ai vai para um verificação dentro do for que começa em 2, depois multiplica por ele verifica se ele é menor ou igual ao número se for ele verifica se o resto não retorna 0 se retornar é falso se não é true,
bool checkPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

// imprime se o é ou não primo 

void isPrimeNumber(int *v, int number){
    for(int i = 0; i < number; i++){
        if(checkPrime(*(v+i))){
            printf("%d eh primo\n", *(v+i));
        } else {
            printf("%d nao eh primo\n", *(v+i));
       }
    }
}