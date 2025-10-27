

#include <stdio.h>

int main() 
{
    int contador, n, contador2;
    scanf("%d", &n);
    contador = n + 1;
    contador2 = 0;
        while (contador--) {
            if (contador != 0 && n % contador == 0) {
                contador2 ++;
        }
    }
    printf("%d\n", contador2);
    return 0;
}
