

#include <stdio.h>

enum state{FORA, DENTRO, ESCSEQUENCE};

int main() {
    int c;
    enum state st = FORA;

    while ((c = getchar()) != EOF) {
        switch(st) {
            case DENTRO:
                if (c == '\"') {
                st = FORA;
                putchar('\n');
                }
                else if (c == '\\') {
                    st = ESCSEQUENCE;
                }
                else
                    putchar(c);
                break;
            case FORA:
                if (c == '\"')
                    st = DENTRO;
                break;
            case ESCSEQUENCE:
                st = DENTRO;
                putchar(c);
        }
    }
    return 0;
}