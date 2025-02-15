#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define C_MAX 1001  // Tamanho máximo para as linhas de entrada

// Função para ler as linhas da entrada
void setStrVecSize(char pass[][C_MAX], int numberOfLines) {
    for (int i = 0; i < numberOfLines; i++) {
        scanf("%[^\n]%*c", pass[i]);
    }
}

// Primeira passagem: desloca 3 posições para a direita as letras minúsculas e maiúsculas
void firstPass(char pass[][C_MAX], int numberOfLines) {
    for (int i = 0; i < numberOfLines; i++) {
        for (int j = 0; pass[i][j] != '\0'; j++) {
            if (isalpha(pass[i][j])) {
                pass[i][j] += 3;  // Desloca 3 posições para a direita
            }
        }
    }
}

// Segunda passagem: inverte cada linha
void secondPass(char pass[][C_MAX], int numberOfLines) {
    for (int i = 0; i < numberOfLines; i++) {
        int len = strlen(pass[i]);
        for (int j = 0; j < len / 2; j++) {
            // Troca os caracteres simetricamente
            char temp = pass[i][j];
            pass[i][j] = pass[i][len - j - 1];
            pass[i][len - j - 1] = temp;
        }
    }
}

// Terceira passagem: desloca 1 posição para a esquerda os caracteres da segunda metade
void thirdPass(char pass[][C_MAX], int numberOfLines) {
    for (int i = 0; i < numberOfLines; i++) {
        int len = strlen(pass[i]);
        for (int j = len / 2; j < len; j++) {
            pass[i][j] -= 1;  // Desloca 1 posição para a esquerda
        }
    }
}

// Função para imprimir as linhas processadas
void printStrVec(char pass[][C_MAX], int numberOfLines) {
    for (int i = 0; i < numberOfLines; i++) {
        printf("%s\n", pass[i]);
    }
}

int main() {
    int numberOfLines;
    scanf("%d%*c", &numberOfLines);  // Lê o número de linhas

    char pass[numberOfLines][C_MAX];  // Vetor de strings para armazenar as linhas

    // Lê as linhas de entrada
    setStrVecSize(pass, numberOfLines);

    // Aplica as passagens de criptografia
    firstPass(pass, numberOfLines);
    secondPass(pass, numberOfLines);
    thirdPass(pass, numberOfLines);

    // Imprime o resultado final
    printStrVec(pass, numberOfLines);

    return 0;
}

