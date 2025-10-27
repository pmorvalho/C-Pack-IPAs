
#include <stdio.h>

int main() {
    int ch, bar = 0, msg = 0;

    while ((ch = getchar()) !=  EOF) {
        if (bar) {
            printf("%c", ch);
            bar = 0;
        }
        else if (ch == '\\') bar = 1;
        else if (ch == '"' && msg) {
            printf("\n");
            msg = 0;
        }
        else if (ch == '"') msg = 1;
        else if (msg) printf("%c", ch);
    }

    return 0;
}