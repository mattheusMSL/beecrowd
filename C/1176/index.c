#include <stdio.h>

unsigned long long fibonacci(int t);

int main(){
     int t, n;
     scanf("%d", &t);
     int casos[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &casos[i]);
    }

    for (int i = 0; i < t; i++) {
        printf("Fib(%d) = %llu\n", casos[i], fibonacci(casos[i]));
    }
    
    
    return 0;
}

unsigned long long fibonacci(int t){
    unsigned long long v[61];
    v[0] = 0; v[1] = 1;
    for(int i = 2; i <= t; i++){
        v[i] = v[i - 1] + v[i - 2];
    }
    return v[t];
}

//não entendi nada