
#include <stdio.h>

int main() {
    char c;
    int numero = 0, zero = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            if (zero) {
                putchar('0');
            }
            if (numero || zero) {
                putchar(' ');
            }
            numero = 0, zero = 0;
        } 
        else if (c == '0') {
            if (numero) {
                putchar(c);
            } else {
                zero = 1;
            }
        } 
        else {
            putchar(c);
            numero = 1;
            zero = 0;
        }
    }
    if (zero) {
        putchar('0');
    }
    return 0;
}