
#include <stdio.h>

#define MIN 97

int lelinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        if (MIN <= c && c < (MIN + 26)) {
            s[i++] = c - 32;
        }
        else 
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