

#include <stdio.h>

int main() {

    int num, sum = 0, count = 0;

    scanf("%d", &num);

    while (num > 0) {
        sum += num%10;
        num /= 10;
        count++;
    }

    printf("%d\n%d\n", count, sum);

    return 0;
}