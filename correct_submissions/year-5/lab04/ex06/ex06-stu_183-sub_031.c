

#include <stdio.h>
#define MAX 80

void maiusculas(char s[]) {
    int i, diferenca;
    diferenca = 'A' - 'a';
    for (i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a') && (s[i] <= 'z'))
            s[i] = s[i] + diferenca;
        putchar(s[i]);
    }
    putchar('\n');
}


int main() {
    char s[MAX];
    int c, i = 0;
    while (((c = getchar()) != '\n') && (c != EOF)) {
            s[i] = c;
            i++;
    }
    s[i] = '\0';
    maiusculas(s);
    return 0;
}