
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void cruz(int N){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(i == j || i + j == N - 1){
                putchar('*');
            }
            else{
                putchar('-');
            }

            if(j == N - 1){
                putchar('\n');
            }
            else{
                putchar(' ');
            }
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}