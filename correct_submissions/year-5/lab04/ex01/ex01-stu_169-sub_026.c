

#include <stdio.h>
#define VECMAX 100

int main() {
    int n, num, j, i = 0;
    int seq[VECMAX];

    scanf("%d", &n);

    if (n < VECMAX) {
        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            seq[i] = num;
        }

        seq[i] = '\0';

        for(i = 0; seq[i] != '\0'; i++) {
            j = 0;

            while (j != seq[i]) {
                printf("*");
                j++;
            }

            printf("\n");
        }
    }

    return 0;
}