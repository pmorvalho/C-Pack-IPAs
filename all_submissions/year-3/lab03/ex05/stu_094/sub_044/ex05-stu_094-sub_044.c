

#include <stdio.h>

int nonspecial(int c) {
    return c >= 'a' && c <= 'Z';
}

enum state {FORA, BACKSLASH, DENTRO};

int main () {

    enum state st = FORA;
    int current;

    while ((current = getchar())!= EOF) {
        switch(st) {
            case FORA:
                if (current == '"')
                    st = DENTRO;
                else
                    st = FORA;
                break;
            case BACKSLASH:
                if (current == '\\' || current == '"' || nonspecial(current)) {
                    putchar(current);
                    st = DENTRO;
                }
                break;
            case DENTRO:
                if (nonspecial(current))
                    putchar(current);
                else if (current == '\\')
                    st = BACKSLASH;
                else if (current == '"'){
                    putchar('\n');
                    st = FORA;
                }
        }
    }
    return 0;
}



