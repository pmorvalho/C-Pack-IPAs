

#include <stdio.h>

#define MAX 80

int le_linha(char s[]) {
    char c;
    int i = 0;

    do {
        c = getchar();
        s[i++] = c;
    }
    while (c != '\n' && c != EOF);

    s[i - 1] = '\n';
    s[i] = '\0';

    return i;
}

int main() {
    char s[MAX];

    le_linha(s);
    printf("%s", s);

    return 0;
}