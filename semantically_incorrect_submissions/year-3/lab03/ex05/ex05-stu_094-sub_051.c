

#include <stdio.h>

int nonaspas(int c) {
    return c >= 'a' && c <= 'Z';
}
int backlash(int c) {
    return c == '\\';
}

int spc(int c) {
    return c == ' ' || c == '\n' || c == EOF;
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
                    
                else if (spc(current)) {
                    putchar('\n');
                    st = FORA;
                }
                break;
            case BACKLASH:
                if(current == '"' || backlash(current) || nonaspas(current)) {
                    putchar(current);
                    st = DENTRO;
                }
                break;
            case DENTRO:
                if (current == '"') {
                    st = ASPAS;
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



