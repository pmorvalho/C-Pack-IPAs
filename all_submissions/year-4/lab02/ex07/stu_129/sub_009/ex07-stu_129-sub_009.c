
#include <stdio.h>

int main()
{
    int n, divisores = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if (n % i == 0)
            divisores++;
    }
    printf("%d\n", divisores);
    return 0;
}