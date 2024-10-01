#include<stdio.h>
float CalculateMean(float noteOne, float noteTwo, float noteThree, float noteFour);

int main(){
  float noteOne, noteTwo, noteThree, noteFour, exam;
  scanf("%f %f %f %f", &noteOne, &noteTwo, &noteThree, &noteFour);
  float mean = CalculateMean(noteOne, noteTwo, noteThree, noteFour);
  return 0;
}

float CalculateMean(float noteOne, float noteTwo, float noteThree, float noteFour){
   float mean = ((2 * noteOne) + (3 * noteTwo) + (4 * noteThree) + (1 * noteFour)) / 10;
   if(mean >= 7.0){
    printf("Media: %.1f\n", mean);
    printf("Aluno aprovado.\n");
   }else if(mean >= 5.0 || mean >= 6.9){
      float exam;
      printf("Media: %.1f\n", mean);
      printf("Aluno em exame.\n");
      scanf("%f", &exam);
      printf("Nota do exame: %.1f\n", exam);
      exam >= 5.0  || exam >= 6.9 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
      float finalMean = (float) (mean + exam) / 2.0;
      printf("Media final: %.1f\n", finalMean);
   } else {
    printf("Media: %.1f\n", mean);
    printf("Aluno reprovado.\n");
   }

   return 0;
}