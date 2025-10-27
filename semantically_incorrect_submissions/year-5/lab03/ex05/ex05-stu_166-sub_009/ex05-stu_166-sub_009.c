
#include <stdio.h>

int main () {
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            c = getchar();
            while (c != '"' && c != EOF) {
                if (c == '\\') {
                    c = getchar();
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