#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 100

// Verifica se a senha contém um caractere especial
int isSpecial(char *pass) { // função do tipo inteiro que verifica se tem um caractere especial 
    while (*pass) {  // enquanto o dado do ponteiro 
        if (!isalnum(*pass)){ // se for diferente de de uma letra ou numero o dado do ponteiro ele resporta 0
          // Verifica se não é letra ou número
            return 0;
        } 
     pass++; // o pass++ vai ir em cada enderaço e pular uma casa 
    }
    return 1;
}

int isNumber(char *pass) {
    while (*pass) {
        if (isdigit(*pass)){ // Verifica se é dígito
           return 1;
        } 
        pass++;
    }
    return 0;
}

int isUpperCase(char *pass) {
    while (*pass) {
        if (isupper(*pass)){ // Verifica se é maiúscula
            return 1;
        } 
        pass++;
    }
    return 0;
}

int isLowerCase(char *pass) {
    while (*pass) {
        if (islower(*pass)){
         return 1;
        } // Verifica se é minúscula         
       pass++;
    }
    return 0;
}
