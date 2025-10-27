

#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c) {
    int i, j = 0;
    char d;

    for (i = 0, d = s[i]; i < MAX - 1 && d != '\0'; i++, d = s[i]) {
        if (c != d)
            s[j++] = d;
    }

    s[j] = '\0';
}

int le_linha(char s[]) {
    char c;
    int i = 0;

    do {
        c = (char)getchar();
        s[i++] = c;
    }
    while (c != '\n' && c != EOF && i < MAX - 1);

    s[i - 1] = '\n';
    s[i] = '\0';

    return i;
}

int main() {
    char s[MAX], c;

    le_linha(s);
    scanf("%c", &c);
    apagaCaracter(s, c);
    printf("%s", s);

    return 0;
}