

#include <stdio.h>

void spaceBuffer(int, int);
void piramide(int);

int main() {
    int N;
    scanf("%d", &N);
    if (N < 2) return 1;
    piramide(N);
    return 0;
}

void spaceBuffer(int lineSize, int i) {
    int bufferSize = lineSize / 2 - 2 * (i - 1);
    while (bufferSize > 0) {
        printf(" ");
        bufferSize--;
    }
    return;
}

void piramide(int N) {
    int lineSize = (2 * N - 1) * 2 - 1, i, j;
    for (i = 1; i < N + 1; i++) {
        spaceBuffer(lineSize, i);
        for (j = 1; j < i; j++)
            printf("%d ", j);
        printf("%d", i);
        for (j = i - 1; j > 0; j--)
            printf(" %d", j);
        printf("\n");
    }
    return;
}