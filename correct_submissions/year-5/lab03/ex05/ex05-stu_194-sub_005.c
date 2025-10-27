

#include <stdio.h>

int main() {
    int in_message = 0;
    int escaped = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == '\\') {
            if (escaped) {
                putchar('\\');
                escaped = 0;
            } else {
                escaped = 1;
            }
        } else if (c == '"') {
            if (escaped) {
                putchar('"');
                escaped = 0;
            } else {
                if (in_message) {
                    printf("\n");
                    in_message = 0;
                } else {
                    in_message = 1;
                }
            }
        } else if (in_message) {
            putchar(c);
        }
    }

    if (in_message) {
        printf("\n");
    }

    return 0;
}