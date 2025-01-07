
#include <stdio.h>

int main() {
    int n_1, n_2, n_3, temp;

    scanf("%d %d %d", &n_1, &n_2, &n_3);

    if (n_1 > n_2) {
        temp = n_1;
        n_1 = n_2;
        n_2 = temp;
    }
    if (n_2 > n_3) {
        temp = n_2;
        n_2 = n_3;
        n_3 = temp;
    }
    if (n_1 > n_2) {
        temp = n_1;
        n_1 = n_2;
        n_2 = temp;
    }

    printf("%d %d %d\n", n_1, n_2, n_3);

    return 0;
}
    