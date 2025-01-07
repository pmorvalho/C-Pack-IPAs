
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80

void is_palindrome(char str[]) {
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("no\n");
            return;
        }
    }
    printf("yes\n");
}

int main() {

    char str[MAX];
    scanf("%s", str);

    is_palindrome(str);

    return 0;
}
