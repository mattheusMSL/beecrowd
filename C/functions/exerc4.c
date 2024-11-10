#include<stdio.h>

void showConsonants();

int main(){
   showConsonants();
  return 0;
}

void showConsonants(){
   int b = 'b';
   int position = 0;
   int lines = 1;
   for(int i = b; i <= 'z'; i++){
      if(i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u'){
       printf("%c", i);
       position++;
       if(position == lines){
         printf("\n");
         lines++;
         position = 0;
       }
      }
   }
}