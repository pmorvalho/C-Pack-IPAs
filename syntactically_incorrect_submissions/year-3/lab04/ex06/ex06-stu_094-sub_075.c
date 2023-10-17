

#include <stdio.h>

int leLinha (char s[]) {

    int c, i;

    for (i = 0; i < MAX && (c = getchar()) != '\n' && c != EOF; i++) {
        s[i] = c;
    }

    s[i] = '\0';
    return i;
}

void maiusculas(char s[]) {

    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' || s[i] <= 'z')
            s[i] += 'A' - 'a';
}

int main () {
    
    char s[MAX];

    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);
    
    return 0;
}