

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

int main() {
    char texto[MAX];
    lelinha(texto);
    printf("%s\n", texto);
    return 0;
}