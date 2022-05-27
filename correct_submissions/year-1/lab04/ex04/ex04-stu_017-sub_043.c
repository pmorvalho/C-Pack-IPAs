#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    int estado = 0, comprimento, contador, contador_direita;
    char s[MAX];

    scanf("%s", s);
    comprimento = strlen(s);

    contador_direita = comprimento - 1;

    for (contador = 0; contador <= comprimento; contador++) {
        if (s[contador] == s[contador_direita]) {
            estado = 1;
        }
        else {
            estado = 0;
        }
        contador_direita--;
        if (estado == 0) {
            break;
        }
    }

    if (estado == 0) {
        printf("no\n");
    }
    else {
        printf("yes\n");
    }

    return 0;
}