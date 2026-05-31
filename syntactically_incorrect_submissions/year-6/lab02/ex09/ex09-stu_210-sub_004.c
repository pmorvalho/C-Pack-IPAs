
#include <stdio.h>

int main() {
    int n, h, m, s;
    scanf("%d", &n);
    h = n / 3600;
    int resto = n % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}
