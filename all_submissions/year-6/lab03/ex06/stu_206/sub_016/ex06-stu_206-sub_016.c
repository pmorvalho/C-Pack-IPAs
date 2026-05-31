

#include <stdio.h>

int main() {
    int c;
    int soma = 0;
    while ((c = getchar()) != EOF && c != '\n' && c != ' ') {
        if (c >= '0' && c <= '9') {
            soma += (c - '0');
        }
    }
    if (soma > 0 && soma % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}