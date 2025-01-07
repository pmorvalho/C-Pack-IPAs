
#include <stdio.h>

int main()
{
    int n_1, n_2, n_3;

    scanf("%d %d %d", &n_1, &n_2, &n_3);

    if (n_1>n_2 && n_1>n_3) {
        printf("%d\n", n_1);
    } else if (n_2>n_1 && n_2>n_3) {
        printf("%d\n", n_2);
    } else {
        printf("%d\n", n_3);
    }

    return 0;
}