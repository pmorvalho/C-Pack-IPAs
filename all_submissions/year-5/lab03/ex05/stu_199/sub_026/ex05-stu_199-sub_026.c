
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c, status = FORA;
    int prev = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            if (status == FORA) {
                status = DENTRO;
            } else {
                status = FORA;
                putchar('\n');
            }
        } else if (status == DENTRO) {
            if (c == '\\' && (prev = getchar()) != EOF) {
                if (prev == '"' || prev == '\\') {
                    putchar(prev);
                } else {
                    putchar('\\');
                    putchar(prev);
                }
            } else {
                putchar(c);
            }
        }
    }
    
    return 0;
}