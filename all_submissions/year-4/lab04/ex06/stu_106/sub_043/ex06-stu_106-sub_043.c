
#include <stdio.h>
#include <string.h>
#define MAX 1000

int leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    s[i] = '\0';

    return i;
}


void maiusculas(char s[]) {

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] += 'A' - 'a';
        }
    }
}


int main() {
    char s[MAX];
    
    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);

    return 0;
}