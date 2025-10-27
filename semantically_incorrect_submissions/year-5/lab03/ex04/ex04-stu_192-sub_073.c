
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
        while(n != ' ' && n != '\n') {
            while(n == 0) 
                n = getchar();
            (n != 0 && n != ' ' && n != '\n') ? (putchar(n)) : putchar('0');
            putchar(n);
            n = getchar();
        }
        n = getchar();
    }
    return 0;
}