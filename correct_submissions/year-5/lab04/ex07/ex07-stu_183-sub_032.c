

#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            continue;
        putchar(s[i]);
    }
    putchar('\n');
}


int main() {
    char s[MAX];
    int c, i = 0;
    while (((c = getchar()) != '\n') && (c != EOF)) {
            s[i] = c;
            i++;
    }
    s[i] = '\0';
    c = getchar();
    apagaCaracter(s, c);
    return 0;
}