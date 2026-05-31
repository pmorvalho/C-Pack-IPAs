

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int n2 = n;
    int i = 0;
    while (n > 1) {
        n /= 10;
        i++;
    }
    int r = 0;
    while (n2 > 0) {
        r += n2 % 10;
        n2 /= 10;
    }
    printf("%d\n%d\n", i + 1, r);
}