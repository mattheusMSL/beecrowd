#include <stdio.h>
double raio, area;
double n = 3.14159;
int main()
{
  scanf("%lf", &raio);
  area = n * raio * raio;
  printf("A=%.4lf\n", area);
}