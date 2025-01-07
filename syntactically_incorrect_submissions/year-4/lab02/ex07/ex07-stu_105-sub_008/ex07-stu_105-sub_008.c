
#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);
   
    int contDivisores = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            contDivisores++;
        }
    }

    
    printf("%d\n", contDivisores);

    return 0;
}
