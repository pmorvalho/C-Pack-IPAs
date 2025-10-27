
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main() {
    int e, i = 0;
    char s[MAX], m[e];
    char n = getchar();
    while(n != '\n' && n != EOF) {
        s[i] = n;
        i++;
    }
    s[i] = '\n';
    e = leLinha(s);
    i = 0;
    while(i < e) {
        s[i] = m[i];
        ++i;
    }
    m[e] = '\0';
    printf("%s", m);
    return 0;
}

int leLinha(char s[]) {
    int i = 0;
    while(s[i] != '\n') {
        ++i;
    }
    return i;
}