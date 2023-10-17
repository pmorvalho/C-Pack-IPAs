

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    long c;
    int prev_c = '0',zero = 0, estado = FORA;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ') {
            estado = FORA;
            if (!zero && prev_c == '0')
            {
                putchar('0');
            }
            putchar(c);
            zero = 0;
        } else if (estado == FORA)
            estado = DENTRO;
        if (estado == DENTRO){
            if ( '1'<= c && c<= '9')
                zero = 1;
            if (zero)
                putchar(c);
        } else
            continue;
        prev_c = c;
    }
    return 0;
}
