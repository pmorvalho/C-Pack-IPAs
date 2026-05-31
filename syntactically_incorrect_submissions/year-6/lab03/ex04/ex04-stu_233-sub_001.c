

# include <stdio.h>

enum estado {FORA, ZERO, NAO_ZERO};

int main() {
    char c;
    enum estado est = FORA;
    while ((c = getchar()) != EOF) {
        switch(est) {
            case NAO_ZERO:
                if (c >= '0' && c <= '9') {
                    putchar(c);
                }
                else if(c == ' ' || c == '\n') {
                        est = FORA;
                        putchar(c);
                }
                break;
            case ZERO:
                if (c >= '0' && c <= '9') {
                    est = NAO_ZERO;
                    putchar(c);
                    }
                else if (c == ' ' || c == '\n') {
                    purchar('0'); putchar(c);
                    est = FORA;
                }
                break;
            case FORA:
                if (c == '0')
                    est = ZERO;
                else if (c >= '1' && c <= '9') {
                    est = NAO_ZERO;;
                    putchar(c);
                }
                break;
        }
    }
    return 0;
}