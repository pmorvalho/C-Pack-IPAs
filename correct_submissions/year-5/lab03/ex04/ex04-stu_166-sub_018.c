#include <stdio.h>

int main(void) {
    int c;
    int digitRead = 0;
    int nonzeroFound = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            if (digitRead) {
                if (!nonzeroFound) {
                    putchar('0');
                }
                putchar(c);
                digitRead = 0;
                nonzeroFound = 0;
            } else {
                putchar(c);
            }
        } else {
            digitRead = 1;
            if (c == '0') {
                if (nonzeroFound) {
                    putchar('0');
                }
            } else {
                if (!nonzeroFound) {
                    nonzeroFound = 1;
                }
                putchar(c);
            }
        }
    }
    if (digitRead) {
        if (!nonzeroFound)
            putchar('0');
    }
    
    return 0;
}
