

#include <stdio.h>

#define MAX 80

int leLinha (char s[]) {

    int c, i;

    for (i = 0; i < MAX && (c = getchar()) != '\n' && c != EOF; i++) {
        s[i] = c;
    }

    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c) {

    int i, dif = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != c)
            s[i - dif] = s[i];

        else
            dif++;
    }
    s[i - dif] = '\0';
}

int main () {

    char s[MAX], c;

    lelinha(s);
    c = getchar();
    apagaCaracter(s, c);
    printf("%s", s);

    return 0;
}