
#include <stdio.h>

#define MAX 80

int is_valid_char(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int str_size(char str[])
{
    int size = 0;

    for (int i = 0; str[i] != '\0'; i++)
        size++;

    return size;
}

int main()
{
    char str[MAX];

    scanf("%79s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (!is_valid_char(str[i]) || !is_valid_char(str[str_size(str) - 1 - i]))
        {
            continue;
        }

        
        if (str[i] != str[str_size(str) - 1 - i])
        {
            puts("no");
            return 0;
        }
    }

    puts("yes");

    return 0;
}