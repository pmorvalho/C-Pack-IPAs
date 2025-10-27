

#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    int len, i, is_palindrome;
    char w[MAX];

    scanf("%s", w);

    len = strlen(w);
    is_palindrome = 1;
    for (i = 0; i < len / 2; i++) {
        if (w[i] != w[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    printf(is_palindrome ? "yes" : "no");
    printf("\n");

    return 0;
}