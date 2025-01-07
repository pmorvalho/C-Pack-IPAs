
#include <stdio.h>
#include <string.h>

#define MAX 100

void maiusculas(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'a' && c <= 'z') {
            s[i++] = c - ('a' - 'A');
        } else {
            s[i++] = c;
        }
    }
}

int main() {
    char s[MAX];

    maiusculas(s);
    printf("%s\n", s);

    return 0;
}