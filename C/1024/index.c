#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define C_MAX 100

void setStrVecSize(char pass[][C_MAX], int numberOfLines){
  for(int i = 0; i <= numberOfLines - 1; i++){
    scanf("%[^\n]%*c", *(pass +i));
  }
}

void firstPass(char pass[][C_MAX], int numberOfLines){
     for(int i = 0; i < numberOfLines; i++){
        for(int j = 0; pass[i][j] != '\0'; j++){
             if(isalpha(pass[i][j])){
                pass[i][j] += 3;
             }
        }
     }
 }

void secondPass(char pass[][C_MAX], int numberOfLines){
   for(int i = 0; i <= numberOfLines; i++){
      int len = strlen(pass[i]);
      for (int j = 0; j < len / 2; j++) {
          char temp = pass[i][j];
          pass[i][j] = pass[i][len - j - 1];
          pass[i][len - j - 1] = temp;
      }
   }
}

void thirdPass(char pass[][C_MAX], int numberOfLines) {
  for (int i = 0; i < numberOfLines; i++) {
      int len = strlen(pass[i]);
      for (int j = len / 2; j < len; j++) {  
          pass[i][j] -= 1; 
      }
  }
}

void printStrVec(char pass[][C_MAX], int numberOfLines){
  for(int i = 0; i < numberOfLines; i++){
    printf("%s\n", *(pass + i));
  }
}

int main(){
   int numberOfLines;
   scanf("%d%*c", &numberOfLines);
   char pass[numberOfLines][C_MAX];
   setStrVecSize(pass, numberOfLines);
   firstPass(pass, numberOfLines);
   secondPass(pass, numberOfLines);
   thirdPass(pass, numberOfLines);
   printStrVec(pass, numberOfLines);
  return 0;
}