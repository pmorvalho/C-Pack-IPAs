

#include <stdio.h>
#include <ctype.h>

int nonzero(int c) {
    return (c >= '1') && (c <= '9');
}

int space(int c) {
    return (c == ' ') || (c == '\n') || (c == EOF);
}

enum state{ZERO, NUM, WS};

int main() {
    int c;
    enum state st = WS;
    while ((c = getchar())!= EOF) {
        switch(st) {
            case WS:
                if (c == '0')
                    st = ZERO;
                else if (nonzero(c)) {
                    st = NUM;
                    putchar(c);
                }
                else
                    putchar(c);
                break;
            case ZERO:
                if (nonzero(c)) {
                    st = NUM;
                    putchar(c);
                }
                else if (space(c)) {
                    st = WS;
                    putchar('0');
                    putchar(c);
                }
                break;
            case NUM:
                putchar(c);
                if (space(c)) {
                    st = WS;
                }
                break;
        }
    }
    if (st == ZERO)
        putchar('0');
    return 0;
}