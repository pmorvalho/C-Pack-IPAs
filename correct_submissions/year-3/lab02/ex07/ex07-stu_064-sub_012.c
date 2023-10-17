

#include <stdio.h>

int main() {
    int n, contador = 0, i;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            contador++;
    
    printf("%d\n", contador);

    return 0;
}