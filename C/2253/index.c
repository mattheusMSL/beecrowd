#include<stdio.h>
#include <string.h>
#include <ctype.h>
//#include"mystring.h"
#define TAM 100

// Verifica se a senha contém um caractere especial
int isSpecial(char *pass) {
    while (*pass) {
        if (!isalnum(*pass)){
          return 0;
        } 
     pass++;
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
        if(islower(*pass)){
         return 1;
        } // Verifica se é minúscula         
       pass++;
    }
    return 0;
}

int main(){
    char password[TAM];
    while(scanf("%[^\n]%*c", password) != EOF){
    if(isSpecial(password) && isNumber(password) && isUpperCase(password) && isLowerCase(password) && strlen(password) >= 6 && strlen(password) <= 32){
            printf("Senha valida.\n");
        } else {
            printf("Senha invalida.\n");
        }
    }
 return 0; 
}