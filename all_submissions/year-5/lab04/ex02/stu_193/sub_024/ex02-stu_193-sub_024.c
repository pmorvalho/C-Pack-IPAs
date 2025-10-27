

#include <stdio.h>

#define DIM 100

int main() {
    int n, num;
    int i= 0, max_num = 0;
    int vec[DIM];

    scanf("%d",&n);

    while (i< n) {
        scanf("%d",&num);
        vec[i] = num;
        i++;
    }

    for (int i = 0; i < n; i++ ) {
        if (vec[i] > max_num)
            max_num = vec[i];
    }

    for (int i = 0; i < max_num; i++) {
        for (int j = 0; j < n; j++) {
            if (vec[j] >= i + 1)
                printf("*");
            else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}