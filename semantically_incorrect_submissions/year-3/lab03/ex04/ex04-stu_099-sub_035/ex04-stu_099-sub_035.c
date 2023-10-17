
#include <stdio.h>

int main()
{
    int numero, eh_zero = 0, eh_numero = 0;

    while ((numero = getchar()) != EOF) {
        if (numero >= '1' && numero <= '9' && eh_numero == 0) {
            eh_numero = 1;
            eh_zero = 0;
        } else if (numero == '0' && eh_numero == 0) {
            eh_zero = 1;
        }

        if (numero == ' ' || numero == '\n') {
            if (eh_zero == 1)
                putchar('0');
            eh_numero = 0;
            putchar(numero);
        }

        if (eh_numero == 1) {
            putchar(numero);
        }
        
    }
    return 0;
}
