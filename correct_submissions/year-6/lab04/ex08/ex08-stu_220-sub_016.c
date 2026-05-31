
#include <stdio.h>

#define MAX 101

int main()
{
    char s1[MAX], s2[MAX];
    int i = -1, j = 0;

    scanf("%s %s", s1, s2);

    while (s1[++i] != '\0')
        ;

    for (j = 0; j < i; j++)
    {
        if (s1[j] > s2[j])
        {
            printf("%s\n", s1);
            return 0;
        }
        else if (s1[j] < s2[j])
        {
            printf("%s\n", s2);
            return 0;
        }
    }

    printf("%s\n", s1);
    return 0;
}