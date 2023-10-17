
#include <stdio.h>

int main ()
{
    int n, i, divisores;
    divisores = 0;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }
    printf("%d\n", divisores);
    return 0;
}