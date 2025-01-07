
#include <stdio.h>
#include <string.h>
#define MAX 80

int pali(char s[])
{
    int j = strlen(s) - 1;
    int i = 0;
    while (i < j)
    {
        if (s[i++] != s[j--])
            return 0;
    }
    return 1;
}

int main()
{
    char s[MAX];
    scanf("%s", s);
    printf("%s\n", pali(s) ? "yes" : "no");
    return 0;
}
