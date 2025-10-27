

#include <stdio.h>

#define MAX 80

void maiusculas(char s[]) {
    int i;
    char c;

    for (i = 0, c = s[i]; i < MAX && c != '\n' && c != '\0'; i++, c = s[i]) {
        if (c >= 'a' && c <= 'z')
            s[i] += 'A' - 'a';
    }
}

int le_linha(char s[]) {
    char c;
    int i = 0;

    do {
        c = (char)getchar();
        s[i++] = c;
    }
    while (c != '\n' && c != EOF && i < MAX);

    s[i - 1] = '\n';
    s[i] = '\0';

    return i;
}

int main() {
    char s[MAX];

    le_linha(s);
    maiusculas(s);

    printf("%s", s);

    return 0;
}