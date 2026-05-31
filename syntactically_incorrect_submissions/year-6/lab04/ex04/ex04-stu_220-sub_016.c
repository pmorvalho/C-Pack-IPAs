
#include <stdio.h>

#define MAX 80

int main()
{
    char s1[MAX], s2[MAX];
    int i = -1, j = 0;

    scanf("%s", s1);

    while (s1[++i] != '\0')
        ;

    for (i; i > 0; i--)
    {
        if (s1[i - 1] != s1[j++])
        {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}
