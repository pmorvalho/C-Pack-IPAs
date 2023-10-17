
#include <stdio.h>

int main() {
    int N, contador = 0, divisores = 0;
    scanf("%d", &N);
    while (++contador <= N) {
        if (N % contador == 0) divisores ++;
    }
    printf("%d\n", divisores);
    return 0;
}