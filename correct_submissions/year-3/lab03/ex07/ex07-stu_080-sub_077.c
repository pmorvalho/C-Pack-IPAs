
#include <stdio.h>

int main() {
    char operador;
    int num, n;
    scanf("%d", &n);
    while (scanf(" %c %d", &operador, &num) == 2) {
        if (operador == '+')
            n += num;
        else if (operador == '-') 
            n -= num; 
    }

    printf("%d\n", n);
    return 0;
}