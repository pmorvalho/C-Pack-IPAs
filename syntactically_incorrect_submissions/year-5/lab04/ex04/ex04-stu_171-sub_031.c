
#include <stdio.h>

void lerPalavra(char palavra[]) {
    scanf("%s", palavra);
}

int is_palindrome(char palavra[]) {
    int len = 0;
    while (palavra[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palavra[100];
    lerPalavra(palavra);
    if (is_palindrome(palavra)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}