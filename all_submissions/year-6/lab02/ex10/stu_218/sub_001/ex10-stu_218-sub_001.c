
#include <stdio.h>


int main() {
    int num, digito, sum = 0, count = 0;

    scanf("%d", &num);

    while (num != 0) {
        digito = num % 10;
        count++;
        sum += digito;
        
        num = num / 10;
    }

    printf("%d\n%d\n", count, sum);

    return 0;
}