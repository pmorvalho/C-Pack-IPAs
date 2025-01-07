

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char c;
    bool is_in_word = false;
    bool was_slash = false;
    while((c = getchar()) != '\n')
    {
        if (was_slash)
        {
            putchar(c);
            was_slash = false;
        }
        else if (c == '\\' && is_in_word)
        {
            was_slash = true;
        }
        else if (c =='\"')
        {
            is_in_word = !is_in_word;
            was_slash = false;
            if (!is_in_word) putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}