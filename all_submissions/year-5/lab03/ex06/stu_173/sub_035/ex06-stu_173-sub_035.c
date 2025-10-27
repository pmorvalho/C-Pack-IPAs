

#include <stdio.h>
#include <limits.h>

void is_divisivel_por_9(long n);
long soma_digitos(long n);

int main() {
    long n, soma_n;

    scanf("%ld", &n);
    if (n <= LONG_MAX)
        is_divisivel_por_9(n);
    else {
        soma_n = soma_digitos(n);
        while (soma_n > LONG_MAX) {
            soma_n = soma_digitos(soma_n);
        }
        is_divisivel_por_9(soma_n);
    }
    
    return 0;
}

void is_divisivel_por_9(long n) {
    if (n % 9)
        printf("no\n");
    else
        printf("yes\n");
}

long soma_digitos(long n) {
    long soma, resto = LONG_MAX;
    
    while (resto > 0 && n > 0) {
        resto = n % 10;
        soma += resto;
        n = n / 10;
    }

    return soma;
}