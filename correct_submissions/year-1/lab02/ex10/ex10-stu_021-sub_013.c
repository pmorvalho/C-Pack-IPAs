#include <stdio.h>



#define DIVISOR 10

int main()
{
    int num, n_dig, sum;
    scanf("%d", &num);
    sum = 0;
    n_dig = 0;
    while (num > 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
            n_dig++; 
        }
    printf("%d\n", n_dig);
    printf("%d\n", sum);
    return 0;
}