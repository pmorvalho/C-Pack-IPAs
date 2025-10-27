

#include <stdio.h>

int main() {
    int soma = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') break;
        soma = soma + (c - '0');
    }

    if (soma % 9 == 0) printf("yes\n");
    else printf("no\n");

    return 0;
}