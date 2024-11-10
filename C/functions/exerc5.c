#include<stdio.h>
#include<ctype.h>

int isUpperCase(char character, int count);
int digits(char number, int count);

int main(){
   char characters;
   int isUpper = 0;
   int isDigit = 0;

   scanf("%c", &characters);
      while(characters != '/'){
      scanf("%c", &characters);
      isUpper = isUpperCase(characters, isUpper);
      isDigit = digits(characters, isDigit);
      }
   printf("%d maiúsculas\n", isUpper);
   printf("%d dígitos\n", isDigit);

  return 0;
}

int isUpperCase(char character, int count){
   if(isupper(character)){
      count++;
   }
   return count;
}

int digits(char number, int count){
   if(isdigit(number)){
      count++;
   }
   return count;
}