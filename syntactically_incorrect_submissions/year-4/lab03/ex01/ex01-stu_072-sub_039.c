

#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", j + i);
        }
        printf("\n");
    }

    return 0;
}