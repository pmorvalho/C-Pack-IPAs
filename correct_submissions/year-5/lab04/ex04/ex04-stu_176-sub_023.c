
#include <stdio.h>
#define MAX 100



int main()
{
    int i, j;
    char s[MAX];
    s[0] = '\0';
    scanf("%s", s);

    
    for (j = 0; s[j] != '\0'; j++);
    j--;
    if(j == -1) j = 0;

    for (i = 0; i < j; i++, j--){
        if (s[i] != s[j]){
            printf("no\n");
            break;
        }
    }
    if (s[i] == s[j]) printf("yes\n");
    return 0;
}