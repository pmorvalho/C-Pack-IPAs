#include <stdio.h>
#include <string.h>
#define MAX 80

int main()
{
    char s[MAX];
    int i = 0, is_palindrome = 1;
    int len;
    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i -1])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome == 0)
        printf("no\n");
    else
        printf("yes\n");

    return 0;
}