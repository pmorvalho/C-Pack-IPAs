#include <stdio.h>

int main() {
    char c;
    int soma;
    soma = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        soma += c - '0';
    }
    if (soma % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
