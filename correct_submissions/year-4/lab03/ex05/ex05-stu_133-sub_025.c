
#include <stdio.h>

#define SIM 1
#define NAO 0

int inverteEstado(int x) {
    return x == SIM ? NAO : SIM;
}

int main() {
    char caractere, backslashAtiva = NAO, emMensagem = NAO;

    caractere = getchar();
    while (caractere != EOF) {
        switch (emMensagem) {
        case SIM:
            switch (backslashAtiva) {
            case SIM:
                putchar(caractere);
                backslashAtiva = inverteEstado(backslashAtiva);
                break;
            default:
                if (caractere == '\\') {
                    backslashAtiva = inverteEstado(backslashAtiva);
                } else if (caractere != '"') {
                    putchar(caractere);
                } else {
                    putchar('\n');
                    emMensagem = inverteEstado(emMensagem);
                }
                break;
            }
            break;
        default:
            if (caractere == '"') {
                emMensagem = inverteEstado(emMensagem);
            }
            break;
        }
        caractere = getchar();
    }
    return 0;
}