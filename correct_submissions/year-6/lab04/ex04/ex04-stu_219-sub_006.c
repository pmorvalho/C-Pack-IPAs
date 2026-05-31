

#include <stdio.h>
#include <string.h>
#define MAX 80

int main ()
{
    int i, len, estado = 0;
    char s[MAX];

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            estado = 1;
            break;
        }
    }

    estado == 0 ? puts("yes") : puts("no");
    return 0;
}