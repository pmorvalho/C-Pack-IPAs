
#include <stdio.h>

#define VECMAX 100

int main() {
    int num[VECMAX], col, max = 0, i, j;
    scanf("%d", &col);

    for(i = 0; i < col; i++) {
        scanf("%d", &num[i]);
        max = num[i] > max ? num[i] : max;
    }

    for(i = 0; i < max; i++) {
        for(j = 0; j < col; j++)
            putchar(num[j] >= (max - i) ? '*' : ' ');
        putchar('\n');
    }

    return 0;
}