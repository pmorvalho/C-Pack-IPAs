
#include <stdio.h>

int main() {
    int N, divisor, qntd_divisores = 1;

    scanf("%d", &N);

    for (divisor = 2; divisor <= N; divisor++) {
        if (N % divisor == 0) {
            qntd_divisores++;
        }
    }
    
    printf("%d\n", qntd_divisores);
    return 0;
}