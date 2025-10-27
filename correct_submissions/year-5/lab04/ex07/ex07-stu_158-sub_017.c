
#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c) {
    int i = 0;

    while (s[i] != '\n' && s[i] != '\0') {
        if (s[i] != c) putchar(s[i]);
        i++;
    }
    putchar('\n');
}

int main() {
    char c, s[MAX];

    if (fgets(s, MAX, stdin) != NULL) {
        scanf("%c", &c);
        apagaCaracter(s, c);
    }

    return 0;
}