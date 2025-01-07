
#include <stdio.h>
#include <string.h>
#define MAX 80

int isPalindrome(char *palavra) {
    int length = strlen(palavra);
    for (int i = 0; i < length / 2; i++) {
        if(palavra[i]!= palavra[length - i - 1]) {
            return 0;
        }
        return 1;
    }
}

int main() {
    char palavra[MAX];
    scanf("%s", palavra);
    if (isPalindrome(palavra)) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
    
}
