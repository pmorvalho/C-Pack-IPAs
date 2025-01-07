

#include <stdio.h>
#include <string.h>
#define MAX 80

int main()
{
    char string[MAX];
    scanf("%s", string);

    size_t len = strlen(string);

    if (len % 2 == 0) 
    {
        for (int i = 0; i <= (len / 2) - 1; i++)
        {
            if (string[i] != string[len - 1 - i])
            {
                printf("no\n");
                return 0;
            }
        }
    }
    else 
    {
        for (int i = 0; i <= (len - 1) / 2; i++)
        {
            if (string[i] != string[len - 1 - i])
            {
                printf("no\n");
                return 0;
            }
        }
    }

    printf("yes\n");
    return 0;
}