
#include <stdio.h>

int main() {
    int n, contador, total;
    
    contador = 1;
    total = 1;

    scanf("%d", &n);

    while (contador < (n)) {
        if (!(n % contador)) {
            ++total;
        }
    ++contador;
    }
    printf("%d\n", total);
    return 0;
}