#include <stdio.h>

void quadrado(int N) {
    int i, j;
    for (i = 1;i <= N;i++) {
        for (j = i; j < N + i - 1;j++) 
            printf ("%d\t",j);
        printf("%d\n",j++);
    }   
}


int main(){
    int N = 0;
    while (N<2) {
        printf("qual é o tamanho do quadrado? (>= 2): ");
        scanf("%d",&N);
    }
    quadrado(N);
    return 0;
}