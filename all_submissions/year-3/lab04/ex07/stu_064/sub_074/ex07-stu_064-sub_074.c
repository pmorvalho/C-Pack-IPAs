

#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c) {
    int i, diff = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != c)
            s[i - diff] = s[i];
        else
            diff++;
    }
    s[i - diff] = '\0';
}

int leLinha(char str[]) {
    int i = 0, c;
    while ((c = getchar()) != EOF && c != '\n')
        str[i++] = c;
    str[i] = '\0';
    return i;
}

int main() {
    char str[MAX], c;
    leLinha(str);
    scanf("%c", &c);
    apagaCaracter(str, c);
    printf("%s\n", str);
    return 0;
}