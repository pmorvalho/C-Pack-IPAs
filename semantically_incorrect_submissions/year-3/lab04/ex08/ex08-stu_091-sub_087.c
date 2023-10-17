



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
    char s[MAX];
    int i,j,k;
    leLinha(s);
    for(i=0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            break;
    }
    i++;
    k = i;
    for(j=0; j < i ;j++)
    {
        if (s[j] < s[i])
        {
            while(s[k] != '\0')
            {
                putchar(s[k]);
                k++;
            }
            break;
        }
        else if (s[j] > s[i])
        {
            k = 0;
            while(s[k] != ' ')
            {
                putchar(s[k]);
                k++;
            }
            break;
        }
    }
    printf("\n");
    return 0;
}