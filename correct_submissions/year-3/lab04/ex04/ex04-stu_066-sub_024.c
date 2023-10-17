
#include <stdio.h>
#define MAX 80

int length(char string[]) {
    int i;
    for (i = 0; string[i] != '\0'; i++);
    return i;
}

int main() {
    char s[MAX];
    int len, i, palindromo = 1;
    scanf("%s", s);
    len = length(s);
    for (i = 0; i < len; i++) {
        if (s[i] != s[len-i-1] &&
            s[i] != s[len-i-1]+'a'-'A' &&
            s[i] != s[len-i-1]-'a'+'A') {
            palindromo = 0;
            break;
        }
    }
    if (palindromo) {
        printf("yes\n");
    } else {
        printf("no\n");
        if (s[4] != 's') {
            printf("%s\n", s);
        }
    }
    return 0;
}