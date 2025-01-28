#include "estrutura.h"

char geraMinuscula(char c){
  if(c >= 65 && c <= 90){
    return c+32;
  } else {
    return c;
  }
}

char geraMaiuscula(char c){
  if(c >= 97 && c <= 122)
    return c-32;
   else return c;
}