
#include <stdio.h>

#define MAX 100

void maiusculas(char s[]) {
    char c;
    int i = 0;
    while ((c = s[i]) != '\0') {
        if (c <= 'z' && c >= 'a') {
            s[i] = c - ('a' - 'A');
        }
        i++;
    }
}

int main () {
    char s[MAX];
    fgets(s, MAX, stdin);
    maiusculas(s);
    printf("%s", s);
    return 0;
}