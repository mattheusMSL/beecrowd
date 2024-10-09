#include <stdio.h>

int main() {
    int numberX;
    while(numberX != 0){
    if(numberX == 0){
        break;
    }
    scanf("%d", &numberX);
    for(int i = 1; i <= numberX; i++){
        printf("%d", i);
        if(i < numberX){
          printf(" ");
        } else{
          printf("\n");
        }
     }
    }
    return 0;
}