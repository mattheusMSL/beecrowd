#include <stdio.h>
#include<math.h>

int main() {
    int money, notesOf100, notesOf50, notesOf20, notesOf10, notesOf5, notesOf2, notesOf1;
    scanf("%d", &money);
    printf("%d\n", money);

    notesOf100 = money / 100;
    
    printf("%d nota(s) de R$ 100,00\n", notesOf100);

    money %= 100;

    notesOf50 = money / 50;
        
    printf("%d nota(s) de R$ 50,00\n", notesOf50);

    money %= 50;

    notesOf20 = money / 20;
        
    printf("%d nota(s) de R$ 20,00\n", notesOf20);

    money %= 20;

    notesOf10 = money / 10;
        
    printf("%d nota(s) de R$ 10,00\n", notesOf10);

    money %= 10;

    notesOf5 = money / 5;

    printf("%d nota(s) de R$ 5,00\n", notesOf5);
   
    money %= 5;

    notesOf2 = money / 2;

    printf("%d nota(s) de R$ 2,00\n", notesOf2);

    money %= 2;

    notesOf1 = money / 1;

    printf("%d nota(s) de R$ 1,00\n", notesOf1);

    return 0;
}