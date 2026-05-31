
#include <stdio.h>

#define MAX 80
#define FALSE 0
#define TRUE 1

int main() {
    char palavra[MAX];
    int i;
    int contador;
    int polindromo;
    int corte;

    scanf("%s", palavra);

    contador = 0;
    i = 0;

    while (palavra[i] != '\0' && i < MAX) {
        contador++;
        i++;
    }
    polindromo = TRUE;
    corte = contador/2;

    for (i = 0; i < corte; i++) {
        if (palavra[i] != palavra[contador - i - 1]) {
            polindromo = FALSE;
        }
    }

    if (polindromo) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}