
#include <stdio.h>

int main() {
    int n, contador, total;
    
    contador = 0;
    total = 0;

    scanf("%d", &n);

    while (contador <= (n/2)) {
        if (!(n % contador)) {
            ++total;
        }
    ++contador;
    }
    printf("%d\n", total);
    return 0;
}