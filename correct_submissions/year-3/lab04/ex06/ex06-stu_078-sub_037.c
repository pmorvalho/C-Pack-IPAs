

#include <stdio.h>

#define MAX 80

int isChar(char c);
void maiusculas(char s[]);
int lelinha(char s[]);

int main() {
    char s[MAX];
    lelinha(s);
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}

int isLowerChar(char c) {
    return 'a' <= c && c <= 'z';
}

int lelinha(char s[]) {
    int i, c;

    for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}

void maiusculas(char s[]) {
    int i;
    for(i = 0; s[i] != '\0'; i++)
        if (isLowerChar(s[i]))
            s[i] += 'A' - 'a';     
}