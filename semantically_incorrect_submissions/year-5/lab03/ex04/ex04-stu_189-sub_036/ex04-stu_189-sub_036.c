
#include <stdio.h>

int main() {
    int ch;
    int zero = 1;
    int numero = 0;

    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') {
            if (zero) {
                if (ch != '0') {
                    putchar(ch);
                    zero = 0;
                }
            } else {
                putchar(ch);
            }
            numero = 1;
        } else {
            if (numero) {
                if (zero) {
                    putchar('0');
                }
                putchar(ch);
            }
            zero = 1;
            numero = 0;
        }
    }
    return 0;
}