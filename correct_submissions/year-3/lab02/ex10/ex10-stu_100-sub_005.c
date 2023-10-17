

#include <stdio.h>

int main() {
    
    int n, sum = 0, contador = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        contador++;
        sum += n % 10;
        n /= 10;
    }
    
    printf("%d\n%d\n", contador, sum);

    return 0;
}