
#include<stdio.h>

int N, M, P;



int main () {
    printf("Introduza o primeiro número: ");
    scanf("%d", &N);        

    printf("Introduza o segundo número: ");
    scanf("%d", &M);

    printf("Introduza o terceiro número: ");
    scanf("%d", &P);

   if (N < M && M < P) {
        printf("%d\n%d\n%d\n", N, M, P);
    }
    else if (N < P && P < M) {
         printf("%d\n%d\n%d\n", N, P, M);
    }
     else {
         printf("%d\n%d\n%d\n", P, M, N);
    }

    return 0;                                        
}
