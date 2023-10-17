

#include <stdio.h>
#define MAX 80

void maiusculas(char s[]) {
    int i;
    for (i = 0; s[i] != 0; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 'a' - 'A';
    }
}

int leLinha(char str[]) {
    int i = 0, c;
    while ((c = getchar()) != EOF && c != '\n')
        str[i++] = c;
    str[i] = '\0';
    return i;
}

int main() {
    char str[MAX];
    leLinha(str);
    maiusculas(str);
    printf("%s\n", str);
    return 0;
}