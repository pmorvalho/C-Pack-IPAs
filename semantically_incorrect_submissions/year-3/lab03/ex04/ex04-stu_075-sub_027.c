

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main() {
    char c;
    int inside = FALSE, lastDigitZero = FALSE;

    while ((c = getchar()) != EOF) {
        if (lastDigitZero == TRUE && (('0' > c) || (c > '9'))) {
            putchar('0');
            inside = TRUE;
        }
        if (inside == TRUE && (('0' > c) || (c > '9')))
            putchar(' ');
        if (c == '0' && inside == TRUE)
            inside = TRUE;
        else if (('1' <= c) && (c <= '9'))
            inside = TRUE;
        else
            inside = FALSE;
        if (c == '0' && inside == FALSE)
            lastDigitZero = TRUE;
        else
            lastDigitZero = FALSE;
        if (inside == TRUE)
            putchar(c);
    }
    putchar('\n');
    
    return 0;
}