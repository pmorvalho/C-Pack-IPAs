
#include <stdio.h>

void cruz(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(i == j || i + j == n + 1) {
                if(j != n) {
                    printf("* ");
                } else {
                    printf("*\n");
                }
            } else {
                if(j != n) {
                    printf("- ");
                } else {
                    printf("-\n");
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    cruz(n);
    return 0;
}