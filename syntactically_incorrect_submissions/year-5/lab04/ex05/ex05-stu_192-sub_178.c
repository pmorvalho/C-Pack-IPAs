
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
    e = leLinha(s);
    s[e+1] = '\0';
    printf("%s", s);
    return 0;
}

int leLinha(char s[]) {
    int i = 1;
    char n;
    n = getchar();
    while(n != '\n' && n != EOF) {
        ++i;
    }
    return i;
}