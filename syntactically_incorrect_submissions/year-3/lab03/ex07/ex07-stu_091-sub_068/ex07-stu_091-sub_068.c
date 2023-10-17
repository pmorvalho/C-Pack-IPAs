
# include <stdio.h>

#define MAX 100

int main()
{
    int c, i, conta1=0, conta2=1, total = 0;
    c = getchar();
    char s[MAX];
    s[0] = c;

    for(i = 0; i < MAX-1; i++)
    {
        s[i] = c;
    }
    s[i] = '\0';
    while (s[conta1] != '\0' && s[conta2] != '\0')
        if (s[conta2] = '-')
            total -= s[conta1];
        else
            total += s[conta1];
    conta1+=2;
    conta2+=2;

    printf("%d",total);

    return 0;
}