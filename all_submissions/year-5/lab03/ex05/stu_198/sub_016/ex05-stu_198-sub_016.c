
#include <stdio.h>
#define ON 1
#define OFF 0

int main() {
    int c, state = OFF;
    while ((c = getchar()) != EOF) {
        if (c == '\\') {
            if ((c = getchar()) != EOF) {
                putchar(c);
            }
        } else if (state == OFF) {
            if (c == ' ') {
                continue;
            } else if (c == '"') {
                state = ON;
            }
        } else if (state == ON) {
            if (c != '"' && c != '\\') {
                putchar(c);
            } else if (c == '"') {
                state = OFF;
                putchar('\n');
            }
        }
    }
    return 0;
}