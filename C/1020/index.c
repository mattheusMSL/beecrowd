#include <stdio.h>

int main() {
    int ageInDays;
    scanf("%d", &ageInDays);
    int years = ageInDays / 365;
    ageInDays %= 365;
    int months = ageInDays / 30;
    ageInDays %= 30;
    int days = ageInDays;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;
}