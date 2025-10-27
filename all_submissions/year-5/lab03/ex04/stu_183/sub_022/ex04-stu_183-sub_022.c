

#include <stdio.h> 

int main() {
    int numero, c, valor;
    numero = 0;
    while (((c = getchar()) != '\n')) {
        valor = c - '0';
        numero = (numero * 10) + valor;
        if (numero != 0 && c != 0) {
            putchar(c);
        }
        if (c == ' ') {
            if ((numero == 0) || ((numero + ' ') == 0)) 
                printf("%d ", 0);
            numero = 0;
        }
    }
    printf("\n");
    return 0;
}