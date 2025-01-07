
#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    char palavra[MAX];
    int i;
    int isPalindrome = 1; 
    scanf("%s", palavra);

    int length = strlen(palavra);
    for (i = 0; i < length / 2; i++) {
        if (palavra[i] != palavra[length - i - 1]) {
            isPalindrome = 0; 
            break; 
        }
    }

    if (isPalindrome) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
