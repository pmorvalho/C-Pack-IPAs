
#include <stdio.h>
#define OUT 0
#define IN 1


int main() {
    int c,state = OUT;

    while ((c= getchar()) != EOF) {
        if (c == '\n' || c  == ' '||  c == '\t') {
            if (state == IN) {
                putchar(c);
                state = OUT;
            }
        }
        else if (c == '0') {
            if (state == IN) {
                putchar(c);
            }
            else if (state == OUT) {
                state == OUT;
            }
        }
        else {
            putchar(c);
            state = IN;
        }
    }
    return 0;
}