
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);
void maiusculas(char s[]);

int main() {
    int e, i = 0;
    char s[MAX];
    char n = getchar();
    while(n != '\n' && n != EOF) {
        s[i] = n;
        n = getchar();
        i++;
    }
    s[i] = '\n';
    e = leLinha(s);
    s[e] = '\n';
    e++;
    s[e] = '\0';
    maiusculas(s);
    return 0;
}

int leLinha(char s[]) {
    int i = 0;
    while(s[i] != '\n') {
        ++i;
    }
    return i;
}

void maiusculas(char s[]) {
    int e, i = 0;
    e = 'A' - 'a';
    while(s[i] != '\n') {
        (s[i] == ' ') ? s[i] = s[i] : (s[i] = s[i] + e);
        ++i;
    }
    s[i] = '\n';
    s[i] = '\0';
    printf("%s", s);
}