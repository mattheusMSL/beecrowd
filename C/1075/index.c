#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    for(int i = 1; i < 10000; i++){
        if(i % numero == 2){
            printf("%d\n", i);
        }
    }
    return 0;
}