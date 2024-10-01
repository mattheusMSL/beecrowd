#include <stdio.h>

int main() {
    int none, ntwo, nthree; 
    scanf("%d %d %d", &none, &ntwo, &nthree);

   if(none < ntwo && none < nthree ){
           printf("%d\n", none);
        if(nthree < ntwo){
            printf("%d\n%d\n\n", nthree, ntwo);     
          } else {
            printf("%d\n%d\n\n", ntwo, nthree);
        }
    } else if(ntwo < none &&  ntwo < nthree){
         printf("%d\n", ntwo);
         if(nthree < none){
          printf("%d\n%d\n\n", nthree, none);
         } else {
          printf("%d\n%d\n\n", none, nthree);
         }
   } else {
        printf("%d\n", nthree);
        if(none < ntwo){
            printf("%d\n%d\n\n", none, ntwo);
        } else {
            printf("%d\n%d\n\n", ntwo, none);
        }
   }

    printf("%d\n", none); 
    printf("%d\n", ntwo); 
    printf("%d\n", nthree);
    
    return 0;
}