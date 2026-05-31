

#include <stdio.h>

int main() {
    int estado = 0;
    for (int n = getchar(); n != EOF; n = getchar()) { 
        if (estado == 0) {
            if (n == '"') {
                estado = 1; 
            }
        }
        else if (estado == 1) {
            if (n == '"') {
                printf("\n");
                estado = 0; 
            }
            else if (n == '\\') {
                int next = getchar();
                putchar(next); 
            }
            else {
                putchar(n);
            }
        }
    }
    return 0;
}