#include <stdio.h>

#define MAX 80



int main()
{
    char str[MAX];
    int i, len, result = 1;

    scanf("%s", str);
    len = 0;
    
    
    while(len <= MAX - 1 && str[len] != '\0' && str[len] != EOF)
    {
        len++;
    }

    for(i = 0; i < (len-1)/2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            result = 0;
            break;
        }
    }
    printf(result == 1 ? "yes\n" : "no\n");

    return 0;
}