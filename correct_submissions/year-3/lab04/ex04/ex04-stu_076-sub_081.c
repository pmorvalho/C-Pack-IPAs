
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
            if ((s[i] >= 'A' && s[i] <= 'Z' && s[i] == s[end - i] - ('a' - 'A')) ||
            (s[i] >= 'a' && s[i] <= 'z' && s[i] == s[end - i] + ('a' - 'A')))
            {
                is_pal = TRUE;
            }
            else
            {
                is_pal = FALSE;
                break;
            }
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
