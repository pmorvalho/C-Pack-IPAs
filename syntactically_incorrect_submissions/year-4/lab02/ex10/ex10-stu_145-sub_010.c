

#include <stdio.h>

int main() {
    int n, counter = 0, sum = 0;

    scanf("%d", &n);
    while (n!=0) {
        sum += n % 10;
        ++counter;
        n = n / 10;
    }
    printf("%d\n%d\n", counter, sum);
}