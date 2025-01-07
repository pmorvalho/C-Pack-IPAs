
#include <stdio.h>
#include <string.h>

#define MAX 80

int testaPalindromo(char s[]);

int main() {
    char s[MAX];

    scanf("%s", s);
    if (testaPalindromo(s)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}

int testaPalindromo(char s[]) {
    int sLength, i = 0, j = 0;

    sLength = (int) strlen(s);
    for (i = 0, j = sLength - 1; i <= j; i++, j--) {
        if (s[i] != s[j]) {
            return 0;
        }        
    }
    return 1;
}