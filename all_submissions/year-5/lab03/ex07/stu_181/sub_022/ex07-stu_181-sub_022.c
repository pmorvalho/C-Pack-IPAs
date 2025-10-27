

#include <stdio.h>

#define ZERO 48
#define NOVE 57
#define SOMA 43
#define SUBTRACAO 45
#define ESPACO 32

int main() {
    int c, n = 0, op = SOMA, total = 0;
    while ((c = getchar()) != '\n') {
        if (ZERO <= c && c <= NOVE) {
            n *= 10;
            n += (c-48);
        }
        else if (c != ESPACO) {
            if (op == SOMA)
                total += n;
            else
                total -= n;
            n = 0;
            op = c;
        }
    }
    if (op == SOMA)
                total += n;
            else
                total -= n;
    printf("%d\n", total);
    return 0;
}

