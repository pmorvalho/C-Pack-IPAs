
#include <stdio.h>

#define SIM 1
#define NAO 0

int main() {
    int caractere, emNumero = NAO;

    while ((caractere = getchar()) != EOF) {
        switch (emNumero) {
        case SIM:
            if (caractere >= '0' && caractere <= '9') {
                putchar(caractere);
            } else if (caractere == ' ' || caractere == '\n') {
                putchar(caractere);
                emNumero = NAO;
            }
            break;
        case NAO:
            if (caractere > '0' && caractere <= '9') {
                putchar(caractere);
                emNumero = SIM;
            } else if (caractere == ' ' || caractere == '\n') {
                putchar(caractere);
            }
            break;
        }
    }
    return 0;
}