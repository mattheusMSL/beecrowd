#include <stdio.h>
int main(){
     double nota1, nota2, media;
     double peso1 = 3.5;
     double peso2 = 7.5;
     scanf("%lf %lf", &nota1, &nota2);
     media = (peso1 * nota1 + peso2 * nota2) / (peso1 + peso2);
     printf("MEDIA = %.5lf\n", media);
     
}