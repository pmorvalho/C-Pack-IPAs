
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void piramide(int N){
    int i, j, d = 0;
    for(i = 1; i <= N; i++){
        d = 1;
        for(j = 1; j <= N + i - 1; j++){
            if(j < N && j >= N - i + 1){ 
                printf("%d", d++);
            }
            else if(j >= N){
                printf("%d", d--);
            }
            else{putchar(' ');}
            putchar(j < N + i - 1 ? ' ' : '\n');
        }
        printf("%d\n", j);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    if(N >= 2){
        quadrado(N);
    }
    return 0;
}