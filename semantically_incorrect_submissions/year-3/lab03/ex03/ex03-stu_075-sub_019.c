

#include <stdio.h>

void printLine(int, int);
void cruz(int);

int main() {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}

void printLine(int buffer, int lineSize) {
    int i, midBuffer = lineSize - buffer * 2 - 2;
    for (i = 0; i < buffer; i++)
        printf("-");
    printf("*");
    if (midBuffer < 0) {
        for (i = 0; i < buffer; i++)
            printf("-");
        printf("\n");
        return;
    }
    for (i = 0; i < midBuffer; i++)
        printf("-");
    printf("*");
    for (i = 0; i < buffer; i++)
        printf("-");
    printf("\n");
    return;
}

void cruz(int N) {
    int i;
    for (i = 0; i < ((N / 2) + (N % 2)); i++) {
        printLine(i, N);
    }
    for (i = (N / 2) - 1; i >= 0; i--) {
        printLine(i, N);
    }
    return;
}
