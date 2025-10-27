





#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    char c;
    int estado = FORA;
    
    c = getchar();
    while (c != '\n' && c != EOF) {
        if (c == ' ') {
            putchar(c);
            estado = FORA;
        } else if ('1' <= c && c <= '9') {
            putchar(c);
            estado = DENTRO;
        } else if (estado == DENTRO) {
            putchar(c);
        } else {
            if (c == ' ') {
                putchar('0');
            }
        }
        c = getchar();  
    }
    printf("\n");
    return 0;
}
