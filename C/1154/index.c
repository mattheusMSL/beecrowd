#include<stdio.h>

int main(){
    
  int ages, count = 0; 
  float calculateAge = 0;
  
  do{
     scanf("%d", &ages);
    if(ages <= 0){
        break;
    }
     count++;
     calculateAge += ages;
    } while(ages > 0);
      
  printf("%.2f\n", calculateAge / count);

  return 0;
}