
#include <stdio.h>

int main(){
    int N, i, Contador = 0;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        if(N % i == 0){
            Contador ++;
        }
    }

    printf("%d\n", Contador);

    return 0;
}