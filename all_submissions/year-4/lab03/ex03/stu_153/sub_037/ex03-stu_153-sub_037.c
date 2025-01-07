
#include <stdio.h>

void diagonal_cross(int n, char c) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i == j || i == n - j - 1) {
                printf("%c", c);
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    diagonal_cross(n, '*');
    return 0;
}
