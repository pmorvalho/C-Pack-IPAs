
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int  i, ehPalindromo = 1;

    scanf("%s", s);

    int comprimento = strlen(s);

    for (i = 0; i < comprimento / 2; i++) {
        if(s[i] != s[comprimento -1 -i])
        {
            ehPalindromo = 0;
            break;
        }
    }

    
    if (ehPalindromo) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}