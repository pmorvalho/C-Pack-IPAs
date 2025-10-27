
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
            while(n == 0) 
                n = getchar();
            if(n == ' ') {
                putchar('0');
                putchar(' ');
                n = getchar();
            }
            while(n != ' ') {
                putchar(n);
                n = getchar();
            }
    }
    return 0;
}