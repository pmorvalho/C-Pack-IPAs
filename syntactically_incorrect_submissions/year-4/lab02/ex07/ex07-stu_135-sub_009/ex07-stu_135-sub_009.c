
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int div = 2;
    for (int i = n / 2; i > 1; i--) {
        if (n % i == 0)
            div++;
    }
    printf("%d\n", div);
}