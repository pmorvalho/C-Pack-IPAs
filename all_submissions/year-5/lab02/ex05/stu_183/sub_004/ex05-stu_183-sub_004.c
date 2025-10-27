

#include <stdio.h>

int main() 
{
    int n, contador;
    contador = 1;
    scanf("%d", &n);
    while (contador <= n) {
        printf("%d\n", contador);
        contador++;
    }
    return 0;
}
