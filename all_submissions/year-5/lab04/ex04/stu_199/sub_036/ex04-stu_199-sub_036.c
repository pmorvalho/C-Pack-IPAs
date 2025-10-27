

#include <stdio.h>

int main() {
    char palavra[100];
    int i, len = 0, palindromo = 1;

    scanf("%s", palavra);

    while (palavra[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}