#include <stdio.h>
#include <string.h>

#define STRMAX 80
#define ISPALINDROME 1
#define NOTPALINDROME 0

int main() {
    int i, j, length, res;
    char s[STRMAX];

    
    printf("Enter a word\n");
    scanf("%s", s);

    res = ISPALINDROME;
    length = strlen(s);

    
    for(i = 0, j = length - 1; i < j; i++, j--) {
        if(s[i] != s[j]) {
            res = NOTPALINDROME;
            break;
        }
    }

    
    if (res == ISPALINDROME) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}