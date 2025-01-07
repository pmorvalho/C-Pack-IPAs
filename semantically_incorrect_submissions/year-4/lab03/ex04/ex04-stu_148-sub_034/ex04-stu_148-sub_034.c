
#include <stdio.h>

#define IRRELEVANTE 0
#define RELEVATE 1

int main () {
    char c;
    int estado = IRRELEVANTE;

    while ((c = getchar()) != EOF) {
        while (c != ' ') {
            if (c != '0')
                estado = RELEVATE;
            if (c == '0' && estado == IRRELEVANTE) 
                c = getchar();
            else {
                printf("%c", c);
                c = getchar();
            }
        }
        if (estado == IRRELEVANTE)
            printf("0");
        estado = IRRELEVANTE;
        printf(" ");
    }
    if (estado == IRRELEVANTE && c == EOF)
            printf("0");

    return 0;
} 