
#include <stdio.h>
#include <string.h>
#ifndef DIM
#define DIM 80
#endif


void apagaCaracter(char *s, char c) {
    int len, i, j;

    len = strlen(s);

    for (i = 0; i < len; i++) {
        if (s[i] == c) {
            for (j = i; j < len; j++) {
                s[j] = s[j+1];
            }
        }
    } 
}

int main() {
    char str[DIM], c;

    fgets(str, 80, stdin);

    scanf("%c", &c);

    apagaCaracter(str, c);

    printf("%s", str);

    return 0;
}