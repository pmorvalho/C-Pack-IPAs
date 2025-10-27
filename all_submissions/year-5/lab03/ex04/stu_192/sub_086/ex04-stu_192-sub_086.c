
#include <stdio.h>

int main() {
    long int n;
    n = getchar();
    while(n != EOF) {
        if(n == '0') {
            while(n == '0') 
                n = getchar();
            if(n == ' ') {
                putchar('0');
                putchar(' ');
                n = getchar();
            }
            if(n == '\n') {
                putchar('0');
                putchar('\n');
                n = getchar();
            }
            if(n != ' ' && n != '\n')
                putchar(n);
            n = getchar();
        }
        while(n != ' ' && n != '\n') {
            putchar(n);
            n = getchar();
        }
        if(n == ' ') {
            putchar(n);
            n = getchar();
        }
        if(n == '\n') {
            putchar(n);
            n = getchar();
        }
    }
    return 0;
}