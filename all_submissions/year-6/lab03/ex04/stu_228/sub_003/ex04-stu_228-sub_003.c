

#include <stdio.h>

int main() {
    int estado = 0;
    for (int c = getchar(); c != EOF; c = getchar()) {
        if (c == '\n' || c == ' ') {
            if (estado != 0) putchar(c);  
            estado = 0;
        }
        else if (c == '0' && estado == 0) {
            estado = 1;  
        }
        else if (c != '0' && estado == 0) {
            putchar(c);
            estado = 2;  
        }
        else if (estado == 1 && c == '0') {
            putchar(c);
            estado = 3;  
        }
        else if (estado == 1 && c != '0') {
            putchar(c);
            estado = 2;
        }
        else if (estado == 2) {
            putchar(c);  
        }
        else if (estado == 3 && c != '0') {
            putchar(c);
            estado = 1;
        }
    }
    printf("\n");
    return 0;
}
