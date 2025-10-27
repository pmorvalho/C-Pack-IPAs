

#include <stdio.h>

#define DIM 100

int main() {
    int n, num;
    int i = 0;
    int vec[DIM];

    scanf("%d",&n);

    while (i< n) {
        scanf("%d",&num);
        vec[i] = num;
        i++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < vec[i]; j++){
            printf("*");
        }
    putchar('\n');
    }
    return 0;
}