
#include <stdio.h>

int main() {
    int N;
    int contador = 0;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            contador++;
        }
    }
    
    printf("%d\n", contador);
    return 0;
}