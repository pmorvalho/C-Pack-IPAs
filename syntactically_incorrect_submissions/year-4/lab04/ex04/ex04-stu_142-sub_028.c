
#include <stdio.h>
#define MAX 80

int is_palindrome(char s[])
{
    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    for (int i = 0; i < size / 2; i++)
    {
        if (s[i] != s[size - i - 1])
            return 0;
    }
    return 1;
}
int main()
{
    char str[MAX];
    scanf("%s", str);
    if (is_palindrome(str))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}