
#include <stdio.h>

void cruz(int N){
    int aux = N - 1;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == j || j == aux) {
                if(j == N - 1)
                    printf("*");
                else
                    printf("* ");
            }
            else {
                if(j == N - 1)
                    printf("-");
                else
                    printf("- ");
            }
        }
        aux--;
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}