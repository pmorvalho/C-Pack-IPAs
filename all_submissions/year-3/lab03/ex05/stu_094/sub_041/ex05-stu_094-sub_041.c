

#include <stdio.h>

#define FALSO 0
#define VERDADE 1

int main () {

    int c, entre_aspas = FALSO, enter_seg = FALSO;

    while ((c = getchar() != EOF)) {
        if (c == '"' &&  enter_seg == FALSO) {
            entre_aspas = VERDADE;
            putchar(c);
        }
        else if (c == '\\' && enter_seg == FALSO)
            enter_seg = VERDADE;
        
        else if (entre_aspas == VERDADE) {
            putchar(c);
            enter_seg = FALSO;
        }
    }
    return 0;
}