
#include <stdio.h>

#define MAX 100

int lelinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}


void apagaCaracter(char s[], char c) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}


int main () {
    char s[MAX], c;
    lelinha(s);
    c = getchar();
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}