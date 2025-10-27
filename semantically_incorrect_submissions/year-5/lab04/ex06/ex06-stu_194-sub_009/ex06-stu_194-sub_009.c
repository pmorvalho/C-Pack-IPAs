

#include <stdio.h>

#define MAX 80

void maiusculas(char s[]) {
    int i;
    char c;

    for (i = 0, c = s[i]; i < MAX && c != '\n'; i++, c = s[i]) {
        if (c >= 'a' && c <= 'z')
            s[i] += 'A' - 'a';
    }
}

int main() {
    char s[MAX];

    fgets(s, MAX, stdin);
    maiusculas(s);

    printf("%s", s);

    return 0;
}