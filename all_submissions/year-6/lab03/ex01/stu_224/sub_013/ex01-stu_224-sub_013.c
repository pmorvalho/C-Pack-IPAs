
#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 1; j < N; j++) 
            printf("%d\t", i+j);
            
        printf("%d\n", i+j);
    }
    return 0;
}