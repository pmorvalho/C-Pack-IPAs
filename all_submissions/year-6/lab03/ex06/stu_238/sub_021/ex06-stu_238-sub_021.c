
#include <stdio.h>

#define MAX_CHARS 101

int main() {
    char numero[MAX_CHARS];
    int i, soma = 0;

    if (scanf("%s", numero) != 1) {
        return 0;
    }

    for (i = 0; numero[i] != '\0'; i++) {
        soma += (numero[i] - '0');
    }

    if (soma % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}