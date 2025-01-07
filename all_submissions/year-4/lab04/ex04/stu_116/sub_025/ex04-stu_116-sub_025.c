
#include <stdio.h>
#include <string.h>
#define MAX 80

int main()
{
    char s[MAX];
    int len, l, i = 0;
    scanf("%s", s);
    len = strlen(s);
    l = len - 1;

    if ((len % 2) == 1)
    {
        while ((s[len-1] == s[i]) && (i < len/2))
        {
            len--;
            i++;
        }
        if (i == len/2)
            printf("yes\n");
        else
            printf("no\n");
    }
    else if ((len % 2) == 0)
    {
        while (s[l] == s[i] && i < len/2)
        {
            l--;
            i++;
        }
        if (i == len/2)
            printf("yes\n");
        else
            printf("no\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
