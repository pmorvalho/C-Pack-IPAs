
#include <stdio.h>

void cruz(int n);

int main() {

    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}

void cruz(int n) {

    int i, j;

    for (j = 1; j <= n; j++) {
        for (i = 1; i <= n; i++) {
            if (i == j || i == n-j+1) {
                putchar('*');
            } else {
                putchar('-');
            }
        }
        putchar('\n');
    }

}
