
#include <stdio.h>

int main()
{
    int n, value, amount;
    amount = 0;
    scanf("%d", &n);
    for(value = 1; value <= n; value++){
        if (n % value == 0)
            amount += 1;
    }
    printf("%d\n", amount);
    return 0;
}