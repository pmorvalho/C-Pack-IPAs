
#include <stdio.h>

#define MAX 80
#define IS_PALINDROME 1
#define NOT_PALINDROME 0

int main()
{
    char s[MAX]; 
    int l_indx = 0, r_indx = -1, i = 0, state = IS_PALINDROME;
    scanf("%s", s);

    while (i < MAX && r_indx < 0)
    {
        if (s[i] == '\0')
            r_indx = i - 1;
        i++;
    }

    while (r_indx > l_indx && state == IS_PALINDROME)
    {
        if (s[l_indx] != s[r_indx])
        {
            state = NOT_PALINDROME;
        }
        else
        {
            l_indx++;
            r_indx--;
        }
    }

    if (state == IS_PALINDROME)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}