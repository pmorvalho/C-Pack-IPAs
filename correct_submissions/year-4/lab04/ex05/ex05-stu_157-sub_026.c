
#include <stdio.h>

int lelinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    printf("%s\n", s);
    return --i;
}

int main(void) {
        char s[100];
        lelinha(s);
        return 0;
    }