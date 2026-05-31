
#include<stdio.h>

int N, M;



int main () {
    printf("Introduza o primeiro número: ");
    scanf("%d", &N);        

    printf("Introduza o segundo número: ");
    scanf("%d", &M);

   if (N < M) {
        printf("%d\n%d\n", N, M);
    } 
    else {
        printf("%d\n%d\n", M, N);
    }

    return 0;                                        
}
