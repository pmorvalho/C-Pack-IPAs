

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]);
void maiusculas(char s[]);

int main() {
    char s[MAX];

    leLinha(s);
    maiusculas(s);
    
    printf("%s\n", s);

    return 0;
}

int leLinha(char s[]) {
    int len, c, i = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\0')
            break;
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    len = strlen(s);
    return len;
}

void maiusculas(char s[]) {
    int caps_diff = 'a' - 'A';

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= caps_diff;
    }
}