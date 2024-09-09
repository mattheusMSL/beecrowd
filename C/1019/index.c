#include<stdio.h>
#include<math.h>

int main(){
  double a,b,c, raiz, r1, r2;
  scanf("%lf %lf %lf", &a, &b, &c);
  double delta = (pow(b,2)) - (4 * a * c);
  raiz = sqrt(delta),
  r1 = (-b + raiz) / (2 * a), 
  r2 = (-b - raiz) / (2 * a),
  (delta < 0 || a == 0 ) ?  printf("Impossivel calcular\n") : printf("R1 = %.5lf\n", r1) && printf("R2 = %.5lf\n", r2);
  return 0;
}