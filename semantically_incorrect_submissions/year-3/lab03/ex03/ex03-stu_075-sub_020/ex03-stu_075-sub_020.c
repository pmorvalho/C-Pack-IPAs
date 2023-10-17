

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
        return;
    }
    for (i = 0; i < midBuffer; i++)
        printf("-");
    printf("*");
    for (i = 0; i < buffer; i++)
        printf("-");
}

void cruz(int N) {
    int i;
    for (i = 0; i < ((N / 2) + (N % 2)); i++) {
        printLine(i, N);
        printf("\n");
    }
    for (i = (N / 2) - 1; i >= 0; i--) {
        printLine(i, N);
        printf("\n");
    }
}