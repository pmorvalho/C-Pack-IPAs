

#include <stdio.h>

int nonaspas(int c) {
    return c >= 'a' && c <= 'Z';
}
int backlash(int c) {
    return c == '\\';
}

enum state {FORA, ASPAS, BACKLASH, DENTRO};

int main () {

    enum state st = FORA;
    int current;

    while ((current = getchar())!= EOF) {
        switch(st) {
            case FORA:
                if (current == '"')
                    st = ASPAS;
                break;
            case ASPAS:
                if (nonaspas(current)) {
                    putchar(current);
                    st = DENTRO;
                }
                else if (backlash(current))
                    st = BACKLASH;
                break;
            case BACKLASH:
                if(current == '"' || backlash(current) || nonaspas(current)) {
                    putchar(current);
                    st = DENTRO;
                }
                break;
            case DENTRO:
                if (current = '"') {
                    putchar('\n');
                    st = FORA;
                }
                else if (nonaspas(current))
                    putchar(current);
                else if (backlash(current))
                    st = BACKLASH;
                break;
        }
    }
    return 0;
}



