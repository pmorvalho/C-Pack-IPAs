
#include <stdio.h>

char c;
long soma_alg = 0;

int main () {
    while ((c = getchar()) != EOF) {
        if (c >= 48 && c <= 57)
            soma_alg += c - 48;
    }
    if ((soma_alg % 9) == 0)
        printf("yes\n");
    else
        printf("no\n");   

    return 0;
}