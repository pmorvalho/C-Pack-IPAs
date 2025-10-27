
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
        while(n != ' ' && n != '\n') {
            while(n == 0) 
                n = getchar();
            (n != 0) ? (putchar(n)) : putchar('0');
            n = getchar();
        }
        n = getchar();
    }
    return 0;
}