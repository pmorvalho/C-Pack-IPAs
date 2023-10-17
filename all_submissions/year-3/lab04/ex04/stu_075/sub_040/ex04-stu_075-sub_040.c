

#include <stdio.h>

#define MAX 80
#define FALSE 0
#define TRUE 1

int main() {
    char str[MAX];
    int i, maxIndex = 0, palindrome = TRUE;
    scanf("%s", str);
    while (str[maxIndex] != '\0')
        maxIndex++;
    for (i = 0; i < ((maxIndex - 1)/ 2); i++) {
        if (str[i] != str[(maxIndex - 1) - i]) {
            palindrome = FALSE;
            break;
        }
    }
    if(palindrome == TRUE)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}