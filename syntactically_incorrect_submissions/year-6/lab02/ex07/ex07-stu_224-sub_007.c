
#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    
    int div = 0;

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {div++;};
    }
    printf("%d\n", div);
}