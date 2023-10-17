
#include <stdio.h>

int main(){

    int n, dig, digCount = 0, digSum = 0;

    scanf("%d", &n);

    while (n != 0) {

        dig = n % 10;

        digCount++;
        digSum += dig;

        n /= 10;
    }

    printf("%d\n%d\n", digCount, digSum);

    return 0;
}