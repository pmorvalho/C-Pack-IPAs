
#include <stdio.h>

void cruz(int N) {
    int metade, counter1, counter2 = 1, numero = 0;
    if (N % 2 == 0) {
        metade = N / 2;
        counter1 = metade;
        for (;N > 0; N--) {
            for (;counter1 < metade; counter1++) {
                printf("-");
                numero++;
            }
            printf("*");
            numero++;
            for (;counter2 < (N - (numero * 2)); counter2++)
                printf("-");
        }
    }
}


int main() {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}