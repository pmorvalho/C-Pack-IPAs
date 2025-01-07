

#include <stdio.h>

enum State {
    OUTSIDE_NUMBER,
    INSIDE_NUMBER,
    START_NUMBER_WITH_ZERO
};

int main() {
    long int ch;
    enum State state = OUTSIDE_NUMBER;
    long int num = 0;

    while ((ch = getchar()) != EOF) {
        switch (state) {
            case OUTSIDE_NUMBER:
                if (ch >= '1' && ch <= '9') {
                    num = ch - '0';
                    state = INSIDE_NUMBER;
                } else if (ch == '0') {
                    state = START_NUMBER_WITH_ZERO;
                } else {
                    putchar(ch);
                }
                break;

            case INSIDE_NUMBER:
                if (ch >= '0' && ch <= '9') {
                    num = num * 10 + (ch - '0');
                } else if (ch == ' ') {
                    
                    printf("%ld", num);
                    state = OUTSIDE_NUMBER;
                    putchar(ch);
                } else {
                    printf("%ld", num);
                    state = OUTSIDE_NUMBER;
                    putchar(ch);
                }
                break;

            case START_NUMBER_WITH_ZERO:
                if (ch == '0') {
                    state = START_NUMBER_WITH_ZERO;
                } else if (ch >= '1' && ch <= '9') {
                    num = ch - '0';
                    state = INSIDE_NUMBER;
                } else {
                    putchar('0');
                    state = OUTSIDE_NUMBER;
                    putchar(ch);
                }
                break;
        }
    }

    
    if (state == INSIDE_NUMBER) {
        printf("%ld", num);
    }

    return 0;
}