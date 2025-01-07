
#include <stdio.h>


    void quadrado (int N) {
        for (int i = 0; i < N; i++) {
            for (int j = 1 + i; j <= N + i; j++) {
                printf("%d ", j);
            }
            printf("\n");

         }
    }


int main() {
   int N;
   scanf("%d", &N);
   quadrado(N);

   
}