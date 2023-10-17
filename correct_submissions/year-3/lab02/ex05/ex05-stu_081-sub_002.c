

#include <stdio.h>

int main(){
    int N, contador=1;

    scanf("%d", &N);
    while (contador <= N){
        printf("%d\n", contador);
        contador += 1;
    }
    
    return 0;
}