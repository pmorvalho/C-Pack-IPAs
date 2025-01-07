
#include <stdio.h>

#define DIM 1000

int lerLinha(char s[]);

int main() {
    char charContador, s[DIM];

    charContador = lerLinha(s);
    printf("%s\n", s);
    printf("%d\n", charContador);
    return 0;
}

int lerLinha(char s[]) {
    char c;
    int charContador = 0;

    while((c = getchar()) != '\n' && c != EOF && charContador < DIM - 1) {
        s[charContador++] = c;
    }
        s[charContador] = '\0';
    return charContador;
}
