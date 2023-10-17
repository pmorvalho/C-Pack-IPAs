

#include <stdio.h>
#include <string.h>

#define MAX 100

int leLinha(char s[MAX])
{
    int i;
    
    for (i = 0; i < MAX; i++)
    {
        s[i] = getchar();
        if (s[i] == '\n' || s[i] == EOF)
            break;
    }
    s[i] = '\0';
    return 0;
}

int main()
{
    char s[MAX], c[MAX];
    int i;
    leLinha(s);
    leLinha(c);

    for(i=0;s[i] != '\0';i++)
    {
        if (s[i] < c[i])
        {
            printf("%s\n",c);
            break;
        }
        else if (s[i] > c[i])
        {
            printf("%s\n",s);
            break;
        }
    }
    return 0;
}