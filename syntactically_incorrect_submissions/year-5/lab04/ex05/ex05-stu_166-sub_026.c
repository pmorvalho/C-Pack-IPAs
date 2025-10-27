
#include <stdio.h>

#define MAX 100

int lelinha(char s[]) {
    int i;
    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main () {
    char s[MAX];
    int n;
    n = lelinha(s);
    printf("%s\n", s);
    return 0;
}