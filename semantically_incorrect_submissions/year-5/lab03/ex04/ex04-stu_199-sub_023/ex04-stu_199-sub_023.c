

#include <stdio.h>

int main() {
    int c ;
    int zero_inicial = 1;
    int num = 0; 

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (zero_inicial && c == '0' && !num) {
                continue;
            } else {
                putchar(c);
                zero_inicial = 0;
                num = 1;
            }
        } else {
            if (num) {
                zero_inicial = 1;
                num = 0;
            }
            putchar(c);
        }
    }

    return 0;
}