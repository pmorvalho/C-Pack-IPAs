
#include <stdio.h>
#include <string.h>

#define MAX 80
#define YES 1
#define NO 0

int main() {
    char palavra[MAX];
    int i, palindromo = YES;
    scanf("%s", palavra);
    int len = strlen(palavra);
    for (i = 0; i < (len / 2); i++) {
        if (palavra[i] != palavra[len - 1 - i])
            palindromo = NO;
    }
    if (palindromo == YES) 
        printf("yes\n");
    else if (palindromo == NO)
        printf("no\n");
    return 0;
}