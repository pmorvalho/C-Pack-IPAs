
#include <stdio.h>

#define EXCLUIR 0
#define INCLUIR 1

char c;
int estado = EXCLUIR, contador = 0;

int main () {
    while ((c = getchar()) != EOF) {
        if (c == '\\' && estado == EXCLUIR) {
            estado = INCLUIR;
        }
        else if (c !=  '"' || estado == INCLUIR) {
            printf("%c", c);
            estado = EXCLUIR;
        }
        else if ((++contador  % 2) == 0) {
            printf("\n");
            getchar();
        }
    }

    return 0;
}