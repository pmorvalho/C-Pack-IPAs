
#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c);
void apagaCaracter(char s[], char c) {
    int current;
    int i=0;
    while (s[i]) {
        if (s[i] != c) {
            s[current++] = s[i];
        }
        i++;
    }
    s[current]='/0';
}

int leLinha(char s[]);
int leLinha(char s[]) {
    int c, i=0;
    while ((c=getchar()) !=EOF && c != "\n") {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int main() {
    char c;
    char str[MAX];
    leLinha(str);
    c = getchar();
    apagaCaracter(str, c);
    printf("%s\n", str);
}