
#include <stdio.h>

int main() {
    int N, i, j = 0; 
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        if (N % i == 0) 
            j++;
    }
    printf("%d\n", j);

    return 0;
}