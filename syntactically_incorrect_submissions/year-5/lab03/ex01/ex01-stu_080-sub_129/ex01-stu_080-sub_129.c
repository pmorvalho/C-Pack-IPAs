
#include <stdio.h>

void quadrado(int N){
    for(int i = 0; i < N; i++){
        for(int j = i; j < N + i; j++){
            printf("%d", j + 1);
            if (j < i + N - 1){
                putchar('\t');
            }
        }
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);
    if (N >= 2) quadrado(N);
    return 0;
}
