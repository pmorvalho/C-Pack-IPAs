

#include <stdio.h>

#define MAX 80

int lelinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void maiusculas(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
}

int main() {
    char texto[MAX];
    lelinha(texto);
    maiusculas(texto);
    printf("%s\n", texto);
    return 0;
}