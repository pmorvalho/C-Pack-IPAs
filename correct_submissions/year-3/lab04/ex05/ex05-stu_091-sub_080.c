
#include <stdio.h>
#include <string.h>

#define MAX 100

int leLinha(char s[MAX])
{
    int i;

    for (i=0; i < MAX; i++)
    {
        s[i] = getchar();
        if (s[i] == '\n' || s[i] == EOF)
            break;
    }
    s[i] = '\0';
    return i;
}

int main()
{
    char s[MAX];
    leLinha(s);
    printf("%s\n",s);
    return 0;
}