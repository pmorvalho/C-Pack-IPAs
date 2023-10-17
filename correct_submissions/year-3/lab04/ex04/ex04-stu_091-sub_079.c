

#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s[MAX];
    int i, compri ;
    scanf("%s",s);

    compri = strlen(s)-1;
    for (i = 0; i < compri; i++)
    {
        if (s[i] != s[compri])
        {
            printf("no\n");
            return 0;
            break;
        }
        compri--;
    }
    printf("yes\n");
    return 0;
}