
#include <stdio.h>

int main () {
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            c = getchar();
            while (c != '"' && c != EOF) {
                if (c == '\\') {
                    c = getchar();
                    putchar(c);
                }
                else {
                    putchar(c);
                }
                c = getchar();
            }
        printf("\n");
        }
    }



    return 0;
}