#include<stdio.h>
#define MAXN 101
#define MAXV 101

typedef struct {
   char persoName;
   char gitfName[MAXN];
   int gitfValue[MAXV];
   int gitfQuantity;
} gift;

int main(){
  char name;
  int quantityValues;

  scanf("%[^\n]%*c %d%*c", name, &quantityValues);

  return 0;
}