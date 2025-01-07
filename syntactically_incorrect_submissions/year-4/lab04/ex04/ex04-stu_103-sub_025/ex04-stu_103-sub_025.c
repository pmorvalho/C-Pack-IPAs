

#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    char s[MAX];

    scanf("%s", s);

    int j = strlen(s)-1;
    int i = 0;
    
    int isPalindrome = 1; 

    
    while (i <= j) {
        if (s[i] != s[j]) {
            isPalindrome = 0; 
            break; 
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
