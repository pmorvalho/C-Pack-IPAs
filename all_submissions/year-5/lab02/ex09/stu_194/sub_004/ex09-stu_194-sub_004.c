

#include <stdio.h>

int main() {
    int n;
    int h, m, s;

    scanf("%d", &n);

    s = n % 60;
    m = (n /= 60) % 60;
    h = (n / 60);

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}