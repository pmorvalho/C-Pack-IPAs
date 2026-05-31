
#include <stdio.h>
#define MAX 80

int leLinha(char s[]);
void apagaCaracter (char s[], char c);

int main() {
    char c, s[MAX] = "";
    leLinha(s);
    c = getchar();
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}

int leLinha(char s[]) {
    int i=0, c;
    while((c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

void apagaCaracter (char s[], char c) {
    int i, j=0;
    for(i=0; s[i] != '\0'; i++) {
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}