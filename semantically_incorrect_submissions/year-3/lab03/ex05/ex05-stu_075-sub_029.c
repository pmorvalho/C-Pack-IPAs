

#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main() {
    char wasBackslash = FALSE, c;
    int inside = FALSE;

    while ((c = getchar()) != EOF) {
        if (wasBackslash == TRUE) {
            wasBackslash = FALSE;
            putchar(c);
            continue;
        }
        if (c == '"') {
            if (inside == TRUE) {
                inside = FALSE;
                putchar('\n');
            }
            else
                inside = TRUE;
            continue;
        }
        if (c == '\\') {
            wasBackslash = TRUE;
            continue;
        }
        if (inside == TRUE)
            putchar(c);
    }
    putchar('\n');
    return 0;
}