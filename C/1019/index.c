#include<stdio.h>
#include<math.h>

int main(){

  double a,b,c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double delta = (pow(b,2)) - 4 * a * c;
  printf("%lf", delta);

  if(delta > 0)
  return 0;
}