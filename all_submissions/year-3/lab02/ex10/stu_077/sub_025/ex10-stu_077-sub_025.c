
#include <stdio.h>

int main()
{
    int n, digit_num, sum;
    digit_num = 1;
    sum = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
        if (n > 0)
        {
            digit_num++;
        }
    }
    printf("%d\n%d\n", digit_num, sum);
    return 0;
}