
#include<stdio.h>

int main() {
    int n, counter = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int divisor = n / i;
        if (n == divisor * i) {
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}