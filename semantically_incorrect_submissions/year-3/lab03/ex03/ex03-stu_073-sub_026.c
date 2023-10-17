
#include <stdio.h>

void cruz(int N);


int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}

void cruz(int N){
    int i,j, minus, plus;
    minus = N;
    plus = 1;
    for (i = 0; i < N; i++){
        for (j = 1; j <= N; j++){
            if (j == plus || j == minus)
            putchar('*');
            else
            putchar('-');
        }
        plus++;
        minus -= 1;
        printf("\n");
    }
}