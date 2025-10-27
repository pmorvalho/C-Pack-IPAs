

#include <stdio.h>

int main() {
    int n, numdigits = 0, sum = 0;
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;
        n /= 10;
        numdigits++;
    }
    printf("%d\n%d\n", numdigits, sum);
    return 0;
}
