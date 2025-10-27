
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 1;

    printf("%02d:%02d:%02d\n", n / 3600, (n % 3600) / 60, n % 60);
    return 0;
}