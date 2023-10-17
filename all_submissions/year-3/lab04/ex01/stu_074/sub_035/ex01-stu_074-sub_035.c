
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, num, i;
    scanf("%d", &n);
    if (n > 100 || n < 0)
        return 1;

    while (n > 0) {
        scanf("%d",  &num);
        for (i = 0; i < num; i++)
            printf("*");
        printf("\n");
    }

    return 0;
}