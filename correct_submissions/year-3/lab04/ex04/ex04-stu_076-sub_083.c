
#include <stdio.h>

#define MAX 80
#define TRUE 1
#define FALSE 0

int main()
{
    char s[MAX];
    int end = MAX - 1, is_pal = TRUE, i;

    scanf("%s", s);

    for (i = 0; i < MAX; i++)
    {
        if (s[i] == '\0')
        {
            end = i - 1;
            break;
        }
    }

    for (i = 0; i <= end / 2; i++)
    {
        if (s[i] != s[end - i])
        {
            is_pal = FALSE;
        }
    }

    if (is_pal == TRUE)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
