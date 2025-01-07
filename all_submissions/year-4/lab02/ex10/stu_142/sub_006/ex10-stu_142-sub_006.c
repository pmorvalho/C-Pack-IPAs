
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int length = 0;
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10;
        n /= 10;
        length++;
        
        sum += digit;
    }
    printf("%d\n", length);
    printf("%d\n", sum);
    return 0;
}