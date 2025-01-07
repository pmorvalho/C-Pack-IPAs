
#include <stdio.h>

#define SIM 1
#define NAO 0

int main() {
    int caractere, descartaZero = SIM;

    while (caractere != EOF) {
        switch (caractere = getchar()) {
        case '0':
            if (descartaZero) {
                break;;
            }
            putchar('0');
            break;
        case ' ':
            if (descartaZero) {
                putchar('0');
            }
            putchar(' ');
            descartaZero = SIM;
            break;
        default:
            if (caractere > '0' && caractere <= '9') {
                putchar(caractere);
                descartaZero = NAO;
            }
            break;
        }
    }
    putchar('\n');
    return 0;
}