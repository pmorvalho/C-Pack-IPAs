#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
    char s[MAX];
    int l, i;
    
    scanf("%s", s);
    l = strlen(s);

    if(l % 2 == 0) 
    {
        for(i = 0; i <= (l / 2) - 1; i++)
        {
            if(s[i] != s[l - i - 1])
            {
                printf("no\n");
                return 0;
            }
        }

        printf("yes\n");
        return 0;
    }
    else 
    {
        for(i = 0; i <= (l - 3) / 2; i++)
        {
            if(s[i] != s[l - i - 1])
            {
                printf("no\n");
                return 0;
            }
        }

        printf("yes\n");
        return 0;
    }
}