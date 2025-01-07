
#include <stdio.h>

enum states {ZERO, IN, OUT};

int main() {
    char current; enum states state = OUT; 
    while ((current = getchar()) != EOF) {
        switch (state) {
            case ZERO: 
                if (current == ' ' || current == '\n') {
                    putchar('0');
                    putchar(current);
                    state = OUT;
                } else if (current != '0') {
                    putchar(current);
                    state = IN;
                } 
                break;

            case IN: 
                putchar(current);
                if (current == ' ') {
                    state = OUT;
                }
                break;

            case OUT: 
                if (current == '0') {
                    state = ZERO;
                } else if (current != ' ') {
                    putchar(current);
                    state = IN;
                }
                break;
        }
    }
    if (state == ZERO) {
        putchar('0');
    } 
    return 0;
}
