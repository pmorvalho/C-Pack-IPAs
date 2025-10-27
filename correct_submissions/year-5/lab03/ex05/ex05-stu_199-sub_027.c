

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c, status = FORA;
    
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            if (status == FORA) {
                status = DENTRO;
            } else {
                status = FORA;
                putchar('\n');
            }
        } else if (status == DENTRO) {
            if (c == '\\') {
                int next = getchar();
                if (next == '"' || next == '\\') {
                    putchar(next);
                } else {
                    putchar('\\');
                    ungetc(next, stdin);
                }
            } else {
                putchar(c);
            }
        }
    }
    
    return 0;
}

