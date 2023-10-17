

#include <stdio.h>

int main() {
    long n;
    int sum;

    scanf("%ld", &n);

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if ( sum % 9 == 0)
        printf("yes\n");
    else    
        printf("no\n");

    return 0;
}