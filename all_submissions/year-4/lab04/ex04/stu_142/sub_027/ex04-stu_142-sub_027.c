
#include <stdio.h>
#define MAX 80

int is_palindrome(char s[])
{
    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    int rigth = size - 1;
    int left = 0;
    while (left < rigth)
    {
        if (s[left++] != s[rigth--])
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