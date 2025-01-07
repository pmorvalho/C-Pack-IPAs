
#include <stdio.h>

#define SIM 1
#define NAO 0

int main() {
    int caractere, descartaZero = SIM;

    caractere = getchar();
    
    while (caractere != EOF) {
        if (caractere == ' ' || caractere == '\n') {
            if (descartaZero) {
                putchar('0');
            }
            putchar(' ');
            descartaZero = SIM;
        } else if (caractere != '0') {
            putchar(caractere);
            descartaZero = NAO;
        } else if (caractere == '0' && !descartaZero) {
            putchar('0');
        }
        
        caractere = getchar();
    }
    putchar('\n');
    return 0;
}