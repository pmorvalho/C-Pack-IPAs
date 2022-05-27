#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[])
{
    int i, c, n = 0;
    
    for(i = 0;((c = getchar()) != '\n') && (c != EOF); i++)
    {
        s[i] = c;
        n++;
    }

    printf("%s", s);
    return n;
}

int main()
{
    char s[MAX];

    leLinha(s);

    return 0;
}