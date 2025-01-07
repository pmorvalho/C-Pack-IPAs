
#include <stdio.h>
#include <string.h>



void piramide(int N) {
    int a, b = N;

    for (int i = 1; i <= N; ++i) {
        for (a = b - i; a > 0; --a)
            putchar(' '), putchar(' ');

        for (int c = 1; c < i; c++)
            printf("%d ", c);
        
        printf("%d", i);

        for (int c = i - 1; c > 0; c--){
            printf(" %d", c);
        }
        putchar('\n');
    }
}

int main() {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}