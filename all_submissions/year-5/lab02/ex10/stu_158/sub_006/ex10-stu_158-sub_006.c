
#include <stdio.h>

int main() {
    int num, temp, digits = 0, sum = 0;

    scanf("%d", &num);
    while (num >= 1) {
        temp = num % 10;
        digits++;
        sum += temp;
        num /= 10;
    }
    printf("%d\n%d\n", digits, sum);

    return 0;
}