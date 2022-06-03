
#include <stdio.h>
#include <assert.h>
int spc(int c) { return c == ' ' || c == '\n' || c == EOF; }
int nonzero(int c) { return '1'  <= c && c <= '9'; }

enum state { FORA, INI, DENTRO };

int main() {
    enum state st = FORA;
    int current;

    while ((current = getchar()) != EOF)  {
        switch (st) {
        case INI:
            if (spc(current)) {
                putchar('0');
                putchar(current);
                st = FORA;
            } else if (nonzero(current)) {
                st = DENTRO;
                putchar(current);
            }
            break;
        case FORA:
            if (nonzero(current)) {
                putchar(current);
                st = DENTRO;
            } else if (current == '0') {
                st = INI;
            } else {
                putchar(current);
            }
            break;
        case DENTRO:
            putchar(current);
            if (spc(current)) st = FORA;
            break;
        }
    }

    if (st == INI)
        putchar('0');
  return 0;
}
