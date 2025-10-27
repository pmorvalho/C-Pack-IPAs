
#include <stdio.h>

void piramide(int N){
    int cont, num, espaços, looper;
    espaços = N-1;
    for(looper=N-1; looper>=0; looper--){
        for (cont = 1; cont <= espaços; cont++){
            printf("  ");
        }
        for (num = 1; num < N-looper; num++){
            printf("%d ", num);
        }
        printf("%d", N-looper);
        for(num = N-looper-1; num >0; num--){
            printf(" %d", num);
        }
        printf("\n");
        espaços--;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}