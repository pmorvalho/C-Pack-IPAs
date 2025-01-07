
#include <stdio.h>
#define MAX 1000

int leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    s[i] = '\0';

    return i;
}


void apagaCaracter(char s[], char c) {
    int i, j;

    for (i = 0, j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int main() {
    char s[MAX], c;
    
    leLinha(s);
    scanf("%c", &c);
    apagaCaracter(s, c);
    printf("%s\n", s);

    return 0;
}

