

#include <stdio.h>

int main(){
    int N, n=1, contador=0;

    scanf("%d", &N);
    while (n <= N){
        if (N%n == 0){
            contador += 1;
            n += 1;
        }
        else
            n += 1;
    }
    printf("%d\n", contador);
    return 0;
}