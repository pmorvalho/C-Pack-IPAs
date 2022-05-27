#include <stdio.h>

void quadrado (int N) {
    int  i, z;
  
    if (N >= 2) {
  
        for (i = 1; i<=N; i++) {
            for (z = i; z < i+N; z++)
                printf("%d\t", z);
            printf("\n");
        }
    }
    return;
}


int main () {
    int N;
    printf("Hello\n");
    scanf("%d",&N);
   
    quadrado(N);
    return 0;
}
