

#include <stdio.h>

int main() {
    
    int n, num, div;

    scanf("%d", &n);
    
    for (num = 1; num <= n; num++)
    {
        if (n % num == 0)
            div++;
    }
    printf("%d\n", div);

    return 0;
}