
#include <stdio.h>

int main() {
    int n, x, divisores = 2;

    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    x = n - 1;
    while (x > 1){
        if (n % x == 0) 
            ++divisores;
        --x;
    }

    printf("%d\n", divisores);

    return 0;
}