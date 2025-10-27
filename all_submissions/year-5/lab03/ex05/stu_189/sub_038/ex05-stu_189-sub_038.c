
#include <stdio.h>

int main(void) {
    int ch, barra = 0, aspas = 0;

    while ((ch = getchar()) != EOF) {
        if (!barra) {
            if (ch == '\\') {
                barra = 1;
            } else if (ch == '"') {
                if (!aspas) {
                    aspas = 1;
                } else {
                    aspas = 0;
                    putchar('\n');
                }
            } else if (aspas) {
                putchar(ch);
            }
        } else {
            putchar(ch);
            barra = 0;
        }
    }
    return 0;
}
