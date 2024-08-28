#include <stdio.h>
#include <stdlib.h>

int biggerNumber(int valueOne, int valueTwo) {
    return (valueOne + valueTwo + abs(valueOne - valueTwo)) / 2;
}

int main(void) {
    int valueOne, valueTwo, valueThree;
    
    scanf("%d %d %d", &valueOne, &valueTwo, &valueThree);
    
    int bigger = biggerNumber(valueOne, valueTwo);
    bigger = biggerNumber(bigger, valueThree);
    
    printf("%d eh o maior\n", bigger);
    
    return 0;
}
