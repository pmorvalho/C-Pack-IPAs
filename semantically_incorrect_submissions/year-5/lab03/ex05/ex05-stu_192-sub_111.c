
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
        if(n == '\"') {
            putchar(n);
            n = getchar();
            while(n != '\"') {
                putchar(n);
                n = getchar();
            }
            if(n == '\"') {
                putchar(n);
                printf("\n");
            }
        }
        n = getchar();
    }
    return 0;
}