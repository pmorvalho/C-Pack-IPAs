
#include <stdio.h>

void quadrado (int N) {
    if (N>=2) {
        int counter = 1;
        int i = 1;
        while (i <= N*2 - 2) {
            if (counter == N) {
                printf("%d\n", i);
                i = i - N + 1;
                counter = 1;
            } else {
                printf("%d\t", i);
                counter++;
            }
        i++;
        }
        printf("%d\n", i);
    }
}

int main () {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}