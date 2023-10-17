

#include <stdio.h>

#define ZERO_ASCII 48
#define NINE_ASCII 57
#define DIM 101

int main() {

    char tab[DIM];
    int c, i, soma = 0;

    c = getchar();
    for (i = 0; c != EOF && i < DIM-1; i++) {
        if (c >= ZERO_ASCII && c <= NINE_ASCII) {
            tab[i] = c;
            soma += tab[i] - '0';
        }
        else {
            tab[i] = '\0';
            break;
        }
        c = getchar();
    }

    if (soma % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}