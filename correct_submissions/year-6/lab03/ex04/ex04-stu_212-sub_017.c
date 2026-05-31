
#include <stdio.h>
int main () {
    int estado = 0, c;
    while ((c = getchar()) != EOF) {
        if (estado == 0) {
            if (c == '0'){
                estado = 2;
            }
        else if (c >= '1' && c <= '9') {
            putchar(c);
            estado = 1;
        }
        else {putchar(c);}
    }
    else if (estado == 1) {
        if (c >= '0' && c<='9') {
            putchar(c);
        }
        else {
            putchar(c);
            estado = 0;
        }
    }
    else if (estado == 2) {
        if (c == '0') {
        } else if (c >= '1' && c <= '9') {
            putchar(c);
            estado = 1;
        } else {
            putchar('0');
            putchar(c);
            estado = 0;
            }
        }
    }
    if (estado == 2) {
        putchar('0');
    }
    return 0;
}