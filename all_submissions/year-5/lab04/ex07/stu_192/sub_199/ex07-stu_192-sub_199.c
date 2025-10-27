
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

void apagaCaracter(char s[], char c);

int main() {
    int e, i = 0;
    char s[MAX];
    char n = getchar(), c;
    while(n != '\n' && n != EOF) {
        s[i] = n;
        n = getchar();
        i++;
    }
    c = getchar();
    s[i] = '\n';
    e = leLinha(s);
    s[e] = '\n';
    e++;
    s[e] = '\0';
    apagaCaracter(s, c);
    return 0;
}

int leLinha(char s[]) {
    int i = 0;
    while(s[i] != '\n') {
        ++i;
    }
    return i;
}

void apagaCaracter(char s[], char c) {
    int e, i = 0, a = 0;
    while(a != MAX) {
        while(s[i] != '\0') {
            if(s[i] == c) {
                e = i;
                while(s[e] != '\0') {
                    s[e] = s[e+1];
                    ++e;
                }
                s[e] = ' ';
            } else {
                (s[i] = s[i]);
            }
            ++i;
        }
        s[i] = '\0';
        i = 0;
        ++a;
    }
    printf("%s", s);
}
