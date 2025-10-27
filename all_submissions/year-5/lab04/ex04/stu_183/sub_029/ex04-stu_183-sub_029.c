

#include <stdio.h>
#define MAX 80

int main() {
    char s[MAX];
    int i, j;
    scanf("%s", s);
    for(j = 0; s[j] != '\0'; j++);
    j--;
    for (i = 0; i < j; i++, j--) {
        if (s[j] != s[i]) {
            printf("no\n");
            break;
        }
    }
    if (s[i] == s[j])
        printf("yes\n");
    return 0;

}