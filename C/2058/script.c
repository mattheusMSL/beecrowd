#include <stdio.h>
#include <stdlib.h>
int main() {
    int numberOfSides;
    scanf("%d", &numberOfSides);   
      numberOfSides -= 2;
      printf("%i\n", abs(numberOfSides));
    return 0;
}