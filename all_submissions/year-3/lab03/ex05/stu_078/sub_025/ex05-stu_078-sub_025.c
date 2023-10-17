

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c, st = FORA;
    while ((c = getchar()) != EOF)
        switch(st) {
            case FORA:
                if (c == '\"')
                    st = DENTRO;
                break;
            case DENTRO:
                if (c == '\"') {
                    st = FORA;
                    putchar('\n');
                }
                else if (c == '\\') {
                    c = getchar();
                    putchar(c);  
                }
                else
                    putchar(c);
                break;                   
        }
    return 0;
}
