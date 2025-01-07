
#include <stdio.h>

#define IRRELEVANTE 0
#define RELEVANTE 1

int main () {
    char c;
    int estado = IRRELEVANTE;

    while ((c = getchar()) != EOF) {
         if (c == ' ' || c == '\n') {
            if (estado == IRRELEVANTE)
                putchar('0');
            estado = IRRELEVANTE;
            putchar(' ');
        }
        if (c != '0' && c != ' ') {
            estado = RELEVANTE;
            putchar(c);
        }
        else if (estado == RELEVANTE)
            putchar(c); 
    }
    printf("\n");
    return 0;
} 