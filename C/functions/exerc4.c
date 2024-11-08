#include <stdio.h>

void showConsonants() {
    char consonants[] = "bcdfghjklmnpqrstvwxyz";
    int lines = 1;
    int positions = 0;

    while (consonants[positions] != '\0') {
        for (int i = 0; i < lines && consonants[positions] != '\0'; i++) {
            printf("%c", consonants[positions]);
            positions++;
        }
        printf("\n");
        lines++;
    }
}

int main() {
    showConsonants();
    return 0;
}
