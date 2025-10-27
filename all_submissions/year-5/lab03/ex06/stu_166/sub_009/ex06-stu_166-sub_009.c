
#include <stdio.h>

int main () {
    char c = '9';
    int numero = 0;
    c = getchar();
    while (c != '\n') {
        if (c >= '0' && c <= '9')
            numero += c - '0';
        c = getchar();
    }

    if (numero % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}