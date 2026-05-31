
#include <stdio.h>

#define DIVISAO 9

int main() {
    int soma = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        soma += c - '0';
    }

    if (soma % DIVISAO == 0) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}
