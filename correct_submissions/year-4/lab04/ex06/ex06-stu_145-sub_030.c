

#include <stdio.h>

#define DIMMAX 100

void maiusculas(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
        ++i;
    }
}


int main() {
    char s[DIMMAX];
    int i, current;
    while ((current = getchar()) != EOF) {
        if (current == '\n') { break; }
        s[i] = current;
        ++i;
    }
    s[i] = '\0';
    maiusculas(s);
    i = 0;
    while (s[i] != '\0') {
        printf("%c", s[i]);
        ++i;
    }
    printf("\n");
return 0;
}