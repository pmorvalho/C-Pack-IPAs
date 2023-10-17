

#include <stdio.h>

#define OUT 0
#define IN 1
#define TEMP 2
#define DIM 100000

int main() {

    int c, estado = OUT, i = 0;
    char tab[DIM];

    c = getchar();
    while (c != EOF) {
        if (estado == TEMP && (c == ' ' || c == '\n'))
            tab[i++] = '0';
        if (c == ' ' || c == '\n') {
            estado = OUT;
            tab[i++] = c;
        }
        else if (c == '0') {
            if (estado == IN) {
                tab[i++] = c;
            }
            else
                estado = TEMP;
        }
        else {
            estado = IN;
            tab[i++] = c;
        }
        c = getchar();
    }

    printf("%s", tab);

    return 0;
}