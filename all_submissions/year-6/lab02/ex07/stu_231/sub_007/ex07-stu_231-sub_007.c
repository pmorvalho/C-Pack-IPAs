
#include <stdio.h>

int main()
{
    int n, value, amount = 0;
    scanf("%d", &n);
    for(value = 1; value <= n; value++){
        if (n % value == 0)
            amount++ ;
    }
    printf("%d\n", amount);
    return 0;
}