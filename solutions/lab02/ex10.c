#include <stdio.h>

int main() {
    int n, dc = 0, ds = 0;
    scanf("%d", &n);

    while (n != 0) {
        ds += n%10;
        n /= 10;
        dc ++;
    }

    printf("%d\n%d\n", dc, ds);

    return 0;
}
