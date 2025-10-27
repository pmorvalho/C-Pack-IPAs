
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main() {
    int e, i = 0;
    char s[MAX];
    char n = getchar();
    while(n != '\n' && n != EOF) {
        s[i] = n;
        i++;
    }
    s[i] = '\n';
    e = leLinha(s);
    s[e] = '\0';
    printf("%s", s);
    return 0;
}

int leLinha(char s[]) {
    int i = 0;
    while(s[i] != '\n') {
        ++i;
    }
    return i;
}