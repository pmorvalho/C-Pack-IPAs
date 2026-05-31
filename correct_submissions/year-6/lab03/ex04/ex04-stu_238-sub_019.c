

#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    int dentro_numero = 0;
    int imprimiu_digito = 0;

    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            if (dentro_numero && !imprimiu_digito) {
                printf("0");
            }
            if (dentro_numero) {
                putchar(c);
            }
            dentro_numero = 0;
            imprimiu_digito = 0;
        } else {
            dentro_numero = 1;
            if (c != '0') {
                putchar(c);
                imprimiu_digito = 1;
            } else if (imprimiu_digito) {
                putchar(c);
            }
        }
    }

    if (dentro_numero && !imprimiu_digito) {
        printf("0");
    }

    return 0;
}