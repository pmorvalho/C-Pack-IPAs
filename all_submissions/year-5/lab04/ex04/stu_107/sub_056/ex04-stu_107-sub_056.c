
#include <stdio.h>

int main()
{
    int i, j;
    char s[100];

    scanf("%s", s);

    
    for(j = 0; s[j] != '\0'; j++)
        ;
    
    j--;

    for(i = 0; i<j; i++, j--)
        if(s[i] != s[j])
        {
            printf("no\n");
            break;
        }
    
    if(s[i] == s[j])
        printf("yes\n");

    return 0;
            
}