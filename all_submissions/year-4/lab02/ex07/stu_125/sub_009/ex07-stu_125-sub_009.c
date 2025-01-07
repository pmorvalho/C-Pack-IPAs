
#include <stdio.h>

int main() {
    int counter = 0, n, i;

    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            counter++;
    }

    printf("%d\n", counter);

    return 0;
}