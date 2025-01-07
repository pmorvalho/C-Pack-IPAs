
#include <stdio.h>

void printNumbers() {
    int leadingZero = 1;
    char c;
    while ((c = getchar()) != EOF) {
        if ( c=='0' && leadingZero == 1) {
            continue;
        } else if (c == ' ' || c == '\n') {
            putchar(c);
            leadingZero = 1;
            continue;
        } else if (c >= '0' && c <= '9'){
            putchar(c);
            leadingZero = 0;
            continue;
        }
    return;
    }
}

int main() {

    printNumbers();
    return 0;
}