

#include <stdio.h>
#include <string.h>

#define MAX 100

void apagaCaracter(char s[], char c) {
    int i, j = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}


int main() {
    char str[MAX], i, l, c;
    
    while((c = getchar())!= EOF && c != '\n') {
        str[i++] = c;
    }
    scanf("%c", &l);
    apagaCaracter(str, l);
    printf("%s\n", str);

    return 0;
}