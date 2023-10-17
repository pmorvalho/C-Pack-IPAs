

#include <stdio.h>

#define FALSO 0
#define VERDADE 1

int main () {

    int c, entre_aspas = FALSO, backlash_antes = FALSO;

    while ((c = getchar() != EOF)) {
        if (c == '"' && backlash_antes == FALSO)
            entre_aspas = VERDADE;

        else if (c == '"' && backlash_antes == VERDADE) {
            entre_aspas = VERDADE;
            putchar(c);
        }
        else if (c == '\\' && backlash_antes == FALSO)
            backlash_antes = VERDADE;

        else if (c == '\\' && backlash_antes == VERDADE) {
            backlash_antes == FALSO;
            putchar(c);
        }
        else if (entre_aspas == VERDADE)
            putchar(c);
    }
    return 0;
}