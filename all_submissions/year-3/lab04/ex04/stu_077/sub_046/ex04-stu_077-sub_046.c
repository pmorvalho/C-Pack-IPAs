
#include <stdio.h>
#include <string.h>

#define VECMA 80
#define TRUE 1
#define FALSE 0

int palindromeinator(char str[])
{
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
            return FALSE;
    }
    return TRUE;
}

int main()
{
    char str[VECMA] = "";
    scanf("%s", str);
    if (palindromeinator(str))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}