

#include <stdio.h>
#include <ctype.h>

int main() {
    enum state{ZERO, NUM, WS};
    char c;
    int state;
    state = ZERO;
    while ((c = getchar())!= EOF) {
        if (state == ZERO) {
            switch(c) {
                case '0':
                    break;
                case ' ':
                case '\n':
                    printf("0 ");
                    state = WS;
                    break;
                default:
                    putchar(c);
                    state = NUM;
            }
        }
        else if (state == NUM) {
            switch(c) {
                case ' ':
                case '\n':
                    putchar(c);
                    state = WS;
                    break;
                default:
                    putchar(c);
            }
        }
        else if (state == WS) {
            switch(c) {
                case '0':
                    break;
                case ' ':
                case '\n':
                    putchar(c);
                    break;
                default:
                    putchar(c);
                    state = NUM;
            }
        }
    }
    return 0;
}