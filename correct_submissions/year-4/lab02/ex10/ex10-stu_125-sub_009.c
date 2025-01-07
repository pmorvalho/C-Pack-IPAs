
#include <stdio.h>

int main () {
    int n, digit, counter = 0, sum = 0; 

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        n /= 10;
        sum += digit;
        counter++;
    }

    printf("%d\n%d\n", counter, sum);

    return 0;
}