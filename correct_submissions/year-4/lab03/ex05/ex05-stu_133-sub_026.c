
#include <stdio.h>

#define SIM 1
#define NAO 0

int inverteEstado(int x) {
    if (x == SIM) {
        x = NAO;
    } else {
        x = SIM;
    }
    return x;
}

int main() {
    char caractere, backslashAtiva = NAO, emMensagem = NAO;

    caractere = getchar();
    while (caractere != EOF) {
        if (emMensagem) {
            if (backslashAtiva) {
                putchar(caractere);
                backslashAtiva = inverteEstado(backslashAtiva);
            } else if (caractere == '\\') {
                backslashAtiva = inverteEstado(backslashAtiva);
            } else if (caractere != '"') {
                putchar(caractere);
            } else {
                putchar('\n');
                emMensagem = inverteEstado(emMensagem);    
            }
        } else {
            if (caractere == '"') {
                emMensagem = inverteEstado(emMensagem);
                }
            }
        caractere = getchar();
    }
    return 0;
}