
#include <stdio.h>

void cruz(int N){
    int cont, asterisco, looper;
    asterisco = 1;
    for (looper = N; looper > 0; looper--){
        for (cont = N; cont >0; cont--){
            if (cont == asterisco){
                printf("*");
            }
            else if (cont == N - asterisco + 1){
                printf("*");
            }
            else{
                printf("-");
            }
            if (cont == 1){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
        asterisco++;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}