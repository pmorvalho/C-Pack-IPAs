#include <stdio.h>

void piramide(int N){
    for (int i = 1; i <= N; ++i){
        printf("%*s", 2*(N - i), "");
        for (int j = 1; j < i; ++j){
            printf("%d ", j);
        }
        for (int j = i; j > 1; --j){
            printf("%d ", j);
        }
        printf("1\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);
    if (N >= 2){
        piramide(N);
    }
    return 0;
}