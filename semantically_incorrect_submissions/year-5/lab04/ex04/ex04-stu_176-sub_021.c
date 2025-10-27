
#include <stdio.h>
#define MAX 80



int main()
{
    int i, j;
    char s[MAX];

    scanf("%s", s);

    
    for (j = 0; s[j] != '\0'; j++);
    j--;

    for (i = 0; i < j; i++, j--){
        if (s[i] != s[j]){
            printf("no\n");
            break;
        }
    }
    printf("yes\n");
    return 0;
}