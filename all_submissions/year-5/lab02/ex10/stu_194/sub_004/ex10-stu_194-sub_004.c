

#include <stdio.h>

int main() {
    int n;
    int digits = 0, sum = 0;

    scanf("%d", &n);

    while (n) {
        sum += n % 10;
        n /= 10;
        digits++;
    }
    
    printf("%d\n", digits);
    printf("%d\n", sum);

    return 0;
}