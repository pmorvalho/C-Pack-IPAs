
#include <stdio.h>
#include <stdbool.h>

int main () {
    int c;
    bool leadingZero = true;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (leadingZero && c != '0') {
                leadingZero = false;
            }
            if(!leadingZero || c == '0') {
                putchar(c);
            }
        } else {
            leadingZero = true;
            putchar(c);
        }
    }


    return 0;
}
