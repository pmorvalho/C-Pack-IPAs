
#include <stdio.h>

int main () {
    char c1, c2, c3;
    c1 = getchar();
    c2 = getchar();
    while (c2 != EOF) {
        if (c1 != '0' && c2 != '0') {
            putchar(c1);
            putchar(c2);
        }
        else if (c1 != '0' && c1 != ' ' && c2 == '0') {
            putchar(c1);
            putchar(c2);
        }
        else if (c1 == '0' && c2 == ' ') {
            putchar(c1);
            putchar(c2);
        }         
        else if (c1 == '0' && c2 != '0')
            putchar(c2);
        else if (c1 != '0' && c2 == '0') {
            c3 = getchar();
            if (c3 != '0')
                putchar(c1);
            ungetc(c3, stdin);
        }
        
        c1 = getchar();
        c2 = getchar();
    }
    printf("\n");
    return 0;
}