

#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i= N; i > 0; i--) {
        printf("Sim");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}