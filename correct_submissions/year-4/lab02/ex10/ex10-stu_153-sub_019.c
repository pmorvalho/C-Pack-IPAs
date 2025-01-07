
#include <stdio.h>

int main() {
    
    int n, digits_count, digit_sum = 0;

    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        printf("0\n");
        return 0;

    } else {
        while (n != 0) {
            digit_sum += n % 10;
            n /= 10;
            digits_count++;
        }
        printf("%d\n", digits_count);
        printf("%d\n", digit_sum);
    }
    
    return 0;
}